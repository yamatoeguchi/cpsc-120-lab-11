
#include "sphere.h"

#include "utility.h"

Point3 Sphere::center() const { 
  // TODO
  // This is a place holder so the program doesn't crash; remove it
  return Point3{0, 0, 0};
}

double Sphere::radius() const { 
  // TODO
  // This is a place holder so the program doesn't crash; remove it
  return NAN;
}

bool Sphere::hit(const Ray& r, double t_min, double t_max,
                 HitRecord& rec) const {
  // Get a vector from the ray's origin to the sphere's center
  // This vector will represent (O-C)
  Vec3 oc = r.origin() - center_;

  // t^2 d \cdot d + 2 t d \cdot (O - C) + (O - C) \cdot (O - C) - r^2 = 0
  // where a is d \cdot d
  // b is 2 d \cdot (O - C)
  // and c is (O - C) \cdot (O - C) - r^2
  // TODO calculate a
  double a = NAN;
  // TODO calculate b
  double b = NAN;
  // TODO calculate c
  double c = NAN;
  
  // If the discriminant is greater than zero then the ray strikes the
  // sphere 1 or more times; else the ray does not strike the sphere
  // TODO caluclate the discriminant
  double discriminant = NAN;

  // Short circuit out of the function if the discriminant is less than zero.
  // There are no real roots when discriminant is less than zero.
  if (discriminant < 0) {
    return false;
  }

  double discriminant_sqrt = std::sqrt(discriminant);
  // return the solution that is on the closest side of the sphere
  // Apply the quadratic equation
  // x = \frac{-b \pm \sqrt{b^2 - 4ac}}{2a}
  double root = (-b - discriminant_sqrt) / (2.0 * a);
  // If our solution is outside of our ray's t_min and t_max
  if (root < t_min || t_max < root) {
    // Look at the other solution
    root = (-b + discriminant_sqrt) / (2.0 * a);
    // If our solution is outside of our ray's t_min and t_max
    if (root < t_min || t_max < root) {
      // Again short circuit out.
      return false;
    }
  }
  // Set the hit record because we know we have a valid root at this point.
  rec.t = root;
  rec.p = r.at(rec.t);
  rec.normal = (rec.p - center_) / radius_;
  return true;
}

std::ostream& operator<<(std::ostream& out, const Sphere& s) {
  out << "Sphere(center=" << s.center() << ", radius=" << s.radius() << ")";
  return out;
}
