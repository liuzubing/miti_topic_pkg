/*************************************
FILE:main.cpp
BRIEF:
AUTHOR:liuzubing
DATE:2018-07-03
*************************************/

#include"myclass.h"
int main(int argc,char** argv)
{
	ros::init(argc,argv,"subscribe_and_publish");
SubscribeAndPublish my_instance;	
ros::MultiThreadedSpinner s(2);
ros::spin(s);
	return 0;
}
