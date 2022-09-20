#include "control.h"
#include <iostream>
Controller::Controller(RobotModel &rmIn):
  model  (rmIn)
{
}

Eigen::Vector2d Controller::Dqd ( 
          const Eigen::Vector2d & q,
          const Eigen::Vector2d & xd,
          const Eigen::Vector2d & Dxd_ff
                      )
{  
  //TODO Compute joint velocities able to track the desired cartesian position
  return Eigen::Vector2d::Zero();
}

