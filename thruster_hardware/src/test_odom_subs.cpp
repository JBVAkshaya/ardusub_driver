#include "rclcpp/rclcpp.hpp"
#include "nav_msgs/msg/odometry.hpp"
#include "thruster_hardware/odom_subscriber.hpp"

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);

  auto odom_subscriber = std::make_shared<OdomSubscriber>();
  rclcpp::spin(odom_subscriber);
  // if (odom_subscriber->odom_data != nullptr)
  //   {
  RCLCPP_INFO(odom_subscriber->get_logger(), "getting data %f", odom_subscriber->odom_data->pose.pose.position.x);
    // }
  rclcpp::shutdown();
  return 0;
}

// int main(int argc, char** argv)
// {
//   // Initialize the ROS node
//   ros::init(argc, argv, "odom_subscriber_node");

//   // Create a NodeHandle
//   ros::NodeHandle nh;

//   // Instantiate the OdomSubscriber class
//   OdomSubscriber odom_subscriber(nh);

//   // Spin to process incoming messages
//   ros::spin();

//   return 0;
// }
