/*********************************
FILE:myclass.h 
BRIEF:
AUTHOR:liuzubing
DATE:2018-07-03
**********************************/

#include<ros/ros.h>
#include"std_msgs/String.h"
#include<boost/thread.hpp>
#include<sstream>

class SubscribeAndPublish
{
	private:
		ros::NodeHandle n_;
		ros::Publisher pub_;
		ros::Subscriber sub1_;
		ros::Subscriber sub2_;
		std_msgs::String output_;
		int count_;

	public:
		SubscribeAndPublish();
		void callback1(const std_msgs::String::ConstPtr& msg);
		void callback2(const std_msgs::String::ConstPtr& msg);
};
