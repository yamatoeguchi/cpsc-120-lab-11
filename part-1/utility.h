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

#ifndef _UTILITY_H_
#define _UTILITY_H_

#include "vec3.h"

/// Global variable representing positive infinity
extern const double kInfinity;
/// Global variable representing the mathematical constant 𝜋 (pi)
extern const double kPi;

/// Clamp a value \p x to be between \p min and \p max
/// \param x The value to be clamped
/// \param min The minimum value that x may be
/// \param max The maximum value that x may be
/// returns \p x, \p min, or \p max, whichever is smallest
double Clamp(double x, double min, double max);

/// Clamp all values of Vec3 \p v to be between \p min and \p max
/// \param v The Vec3 to be clamped
/// \param min The minimum value that any component of \p v may be
/// \param max The maximum value that any component of \p v may be
/// returns a new Vec3 with all the values clamped to be between min and max
Vec3 Clamp(const Vec3 v, double min, double max);

/// Square the value \p x
/// \param x a double to be squared
/// \returns x * x
double Square(double x);

/// Coverts degrees to radians
/// \param degrees Degrees
/// \returns the number of radians
double degrees_to_radians(double degrees);

#endif