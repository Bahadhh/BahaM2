#include "kinematic_model.h"

RobotModel::RobotModel(const double &l1In, const double &l2In):
  l1  (0),
  l2  (0)
{};

void RobotModel::FwdKin(Eigen::Vector2d &xOut, Eigen::Matrix2d &JOut, const Eigen::Vector2d & qIn){
  // TODO Implement the forward and differential kinematics
}