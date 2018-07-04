/***************************************
FILE:myclass.cpp
BRIEF:
AUTHOR:liuzubing
DATE:2018-07-03
***************************************/

#include"myclass.h"

//constructor
SubscribeAndPublish::SubscribeAndPublish()
{
	count_ = 0;
	pub_ = n_.advertise<std_msgs::String>("/chatter_pub",1000);

	sub1_ = n_.subscribe("chatter1",10,&SubscribeAndPublish::callback1,this);
	sub2_ = n_.subscribe("chatter2",10,&SubscribeAndPublish::callback2,this);
	
}

//callback1 function
void SubscribeAndPublish::callback1(const std_msgs::String::ConstPtr& msg)
{
	ROS_INFO("I heard: [%s]",msg->data.c_str());
	std::stringstream ss;
	ss << "Pub: hello world "<<count_;
	output_.data = ss.str();
	pub_.publish(output_);
	ROS_INFO("[%s]",output_.data.c_str());
	++count_;
};

//callback2 function
void SubscribeAndPublish::callback2(const std_msgs::String::ConstPtr& msg)
{
	ROS_INFO("I heard: [%s]",msg->data.c_str());
};
