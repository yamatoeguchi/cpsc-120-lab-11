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


#include "ray.h"

Point3 Ray::origin() const { return origin_; }

Vec3 Ray::direction() const { return direction_; }

Point3 Ray::at(double t) const { return origin_ + (t * direction_); }

std::ostream& operator<<(std::ostream& out, const Ray& r) {
  out << "Ray(origin=" << r.origin() << ", direction=" << r.direction() << ")";
  return out;
}
