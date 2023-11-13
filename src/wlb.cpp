#include "geometry_msgs/msg/pose.hpp"

class WheelLegged
{
public:
    geometry_msgs::msg::Pose robot_pose;

    WheelLegged(float x_pos, float y_pos)
    {
        robot_pose.orientation.x = x_pos;
        robot_pose.position.y = y_pos;
    }

    void move(float x_vel, float y_vel){};
};