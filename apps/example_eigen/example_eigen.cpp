#include <eigen3/Eigen/Dense>
#include <iostream>

// For further information on the Eigen library, refer to https://eigen.tuxfamily.org/dox/
int main(){
  Eigen::Matrix2d A = Eigen::Matrix2d::Identity();
  Eigen::Matrix3d B = Eigen::Matrix3d::Zero();
  Eigen::Matrix<double,2,3> C = Eigen::Matrix<double,2,3>::Ones(); 
  Eigen::Vector2d v1 = Eigen::Vector2d::Ones();
  Eigen::Vector2d v2 = Eigen::Vector2d::Zero();
  std::cout << "================================\n";
  std::cout << "A = \n" << A << "\n\nB = \n"<< B << "\n\nC = \n" << C << "\n\nv1 = \n" << v1 << "\n\nv2 = \n" << v2 << "\n\n"  ;
  A(0,0)  = 4;
  A.bottomRows(1) << 2,3;
  B.topRows(2) = C*3;
  v2 = A*v1;
  std::cout << "================================\n";
  std::cout << "A = \n" << A << "\n";
  std::cout << "\nB = \n"<< B << "\n";
  std::cout << "\nC = \n" << C << "\n";
  std::cout << "\nv1 = \n" << v1 << "\n";
  std::cout << "\nv2 = \n" << v2 << "\n\n"  ;
  std::cout << "================================\n";
  return 0;
}