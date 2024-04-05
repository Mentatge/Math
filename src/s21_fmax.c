#include "s21_math.h"

long double s21_fmax(double n, double m) {
  double res;
  if (n >= m) {
    res = n;
  } else {
    res = m;
  }
  return res;
}
