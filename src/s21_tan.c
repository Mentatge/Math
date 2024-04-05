#include "s21_math.h"

long double s21_tan(double x) {
  long double res = 0;
  if (x == S21_INF_NEG || x == S21_INF_POS) {
    res = S21_NAN;
  } else {
    res = s21_sin(x) / s21_cos(x);
  }
  return res;
}