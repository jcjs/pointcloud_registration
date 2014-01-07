#include <ros/ros.h>
#include "pointcloud_registration.h"

int main(int argc, char **argv)
{
  ros::init(argc, argv, "point_cloud_registration");
  pointcloud_registration::PointCloudRegistration registration;
  ros::spin();
  return 0;
}