/*************************************
FILE:chatter1_pub_node.cpp
BRIEF:
AUTHOR:liuzubing
DATE:2018-07-03
*************************************/
#include<ros/ros.h>
#include<std_msgs/String.h>
#include<sstream>

int main(int argc,char** argv)
{
	ros::init(argc,argv,"chatter1_pub_node");
	ros::NodeHandle n;
	ros::Publisher pub = n.advertise<std_msgs::String>("chatter1",1000);
	
	ros::Rate loop_rate(2000);
	int count = 0;
	
	while(ros::ok())
	{
		std_msgs::String msg;
		std::stringstream ss;
		ss << "chatter1: Hello world " << count;
		msg.data = ss.str();
		ROS_INFO("%s",msg.data.c_str());
		pub.publish(msg);

		ros::spinOnce();
		loop_rate.sleep();
		++count;
	}
	
	return 0;
}
