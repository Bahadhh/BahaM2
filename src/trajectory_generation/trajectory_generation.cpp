#include "trajectory_generation.h"
#define POLY_H
#include <string>
using namespace std;


Polynomial::Polynomial(){};

Polynomial::Polynomial(const double &piIn, const double &pfIn, const double & DtIn){
  //TODO initialize the object polynomial coefficients
 const double a0 [0];
 const double a1 [0];
 const double a2 [0];
 const double a3 [0];
 const double a4 [0];
 const double a5 [0];
 
};

void          Polynomial::update(const double &piIn, const double &pfIn, const double & DtIn){
  //TODO update polynomial coefficients

 P[t]=a1+a2*pow(t,2)+a3*pow(t,3)+a4*pow(t,4),a5*(t,5);
 P[0] = piIn;
 P[1] = pfIn;
 
 P1[t] = 2*a2*(t)+ 3*a3*pow(t,2) + 4*a4*pow(t,3)+ 5*a5*pow(t,4);
 P1[0] = 0;
 P1[1] = 0;


};

const double  Polynomial::p     (const double &t){
  //TODO compute position

  
  return 0;
};

const double  Polynomial::dp    (const double &t){
  //TODO compute velocity
  return 0;
};

Point2Point::Point2Point(const Eigen::Vector2d & xi, const Eigen::Vector2d & xf, const double & DtIn){
  //TODO initialize object and polynomials
}

Eigen::Vector2d Point2Point::X(const double & time){
  //TODO compute cartesian position
  return Eigen::Vector2d::Zero();
}

Eigen::Vector2d Point2Point::dX(const double & time){
  //TODO compute cartesian velocity
  return Eigen::Vector2d::Zero();
}