## miti_topic_pkg
This package release the function that one node can receive two topics and publish one topic at the same time.

### Setup
Run the following command to clone,build,and launch the package (required a sources ROS environment):

```
&& mkdir -p ~/catkin_ws/src
&& cd ~/catkin_ws/src
&& git clone https://github.com/liuzubing/miti_topic_pkg.git
&& cd ..
&& catkin_make
&& source devel/setup.bash
&& rosrun miti_topic_pkg chatter1_pub_node
&& rosrun miti_topic_pkg chatter2_pub_node
&& rosrun miti_topic_pkg subscribe_and_publish_node

```
