#include <ros/ros.h>
#include <tf/transform_broadcaster.h>

int main(int argc, char** argv){
  ros::init(argc, argv, "robot_state_publisher");
  ros::NodeHandle n;

  ros::Rate r(1000);

  tf::TransformBroadcaster broadcaster;

  tf::Transform transform;
  transform.setOrigin(tf::Vector3(0,0,0)); 
  tf::Quaternion q;
  q.setRPY(0,0,-1.57);
  transform.setRotation(q);

  while(n.ok()){
    broadcaster.sendTransform(   tf::StampedTransform(transform,ros::Time::now(),"map", "base_footprint"));   

 r.sleep();
  }
}
