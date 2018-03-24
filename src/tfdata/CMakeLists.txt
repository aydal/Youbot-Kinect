cmake_minimum_required(VERSION 2.4.6)
include($ENV{ROS_ROOT}/core/rosbuild/rosbuild.cmake)

project(tfdata)

find_package(catkin REQUIRED roscpp geometry_msgs rospy tf sensor_msgs)

catkin_package()

add_executable(tf_broadcaster
	src/tf_broadcaster.cpp
)


target_link_libraries(tf_broadcaster ${catkin_LIBRARIES})

