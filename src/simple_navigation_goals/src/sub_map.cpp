// #include "ros/ros.h"
// #include "nav_msgs/OccupancyGrid.h"
// #include "std_msgs/Header.h"
// #include "nav_msgs/MapMetaData.h"

// #include <map>

// // #include "std_msgs/String.h"

// void chatterCallback(const nav_msgs::OccupancyGrid::ConstPtr& msg)
// {
//   std_msgs::Header header = msg->header;
//   nav_msgs::MapMetaData info = msg->info;
//   ROS_INFO("Got map %d %d", info.width, info.height);
//   Map map(info.width, info.height);
// }

// int main(int argc, char **argv)
// {
  
//   ros::init(argc, argv, "listener");

//   ros::NodeHandle n;

  
//   ros::Subscriber sub = n.subscribe("map", 1000, chatterCallback);

//   ros::spin();

//   return 0;
// }