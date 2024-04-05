#include "s21_math.h"

long double s21_acos(double x) {
  long double res = S21_NAN;
  if (0. < x && x < 1.) {
    res = s21_atan(s21_sqrt((1 - (x * x))) / x);
  } else if (-1. < x && x < 0.) {
    res = S21_PI + s21_atan(s21_sqrt((1 - (x * x))) / x);
  }
  return res;
}