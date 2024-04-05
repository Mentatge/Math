#include "s21_math.h"

long double s21_asin(double x) {
  long double res = S21_NAN;
  if (x == S21_INF_NEG) {
    res = S21_NAN;
  }
  if (s21_fabs(x) < 1) {
    res = s21_atan(x / (s21_sqrt(1 - (x * x))));
  }
  return res;
}