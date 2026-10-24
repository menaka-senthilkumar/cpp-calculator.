#ifndef CALCULATOR_H
#define CALCULATOR_H

namespace calc {

double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);

// Throws std::invalid_argument if b is zero.
double divide(double a, double b);

}  // namespace calc

#endif  // CALCULATOR_H
