cmake_minimum_required(VERSION 2.8.3)
project(miti_topic_pkg)

## Compile as C++11, supported in ROS Kinetic and newer
# add_compile_options(-std=c++11)

find_package(catkin REQUIRED COMPONENTS
  geometry_msgs
  roscpp
  std_msgs
)

set(SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/src/myclass.cpp)

set(HEADERS ${CMAKE_CURRENT_SOURCE_DIR}/include/myclass.h)

catkin_package(
#  INCLUDE_DIRS include
#  LIBRARIES miti_topic_pkg
#  CATKIN_DEPENDS geometry_msgs roscpp std_msgs
#  DEPENDS system_lib
)

include_directories(include ${catkin_INCLUDE_DIRS})

add_executable(chatter1_pub_node src/chatter1_pub_node.cpp)
add_executable(chatter2_pub_node src/chatter2_pub_node.cpp)
target_link_libraries(chatter1_pub_node ${catkin_LIBRARIES})
target_link_libraries(chatter2_pub_node ${catkin_LIBRARIES})

add_executable(subscribe_and_publish_node src/main.cpp ${HEADERS} ${SOURCES})
target_link_libraries(subscribe_and_publish_node ${catkin_LIBRARIES})



