// Yamato Eguchi
// CPSC-120-01
// 2021-04-27
// yamatoe1227@csu.fullerton.edu
// @yamatoeguchi
//
// Lab 11-01
//
// This is my sphere lab.
//

#include "utility.h"

#include <limits>

const double kInfinity = std::numeric_limits<double>::infinity();
const double kPi = 3.14159265358979323846;

double Clamp(double x, double min, double max) {
  double rv = x;
  if (x < min) {
    rv = min;
  } else if (x > max) {
    rv = max;
  }
  return rv;
}

Vec3 Clamp(const Vec3 v, double min, double max) {
  return Vec3{Clamp(v.x(), min, max), Clamp(v.y(), min, max),
              Clamp(v.z(), min, max)};
}
double Square(double x) { return x * x; }

double degrees_to_radians(double degrees) { return degrees * kPi / 180.0; }
