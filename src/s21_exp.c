#include "s21_math.h"

long double s21_exp(double x) {
  long double add_value = 1;
  long double res = 1;
  long double i = 1;
  if (x == S21_INF_NEG) {
    res = 0;
  } else {
    while ((s21_fabs(add_value)) > S21_EPS) {
      add_value *= x / i;
      i += 1;
      res += add_value;
      if (res > DBL_MAX) {
        res = S21_INF_POS;
        break;
      }
    }
  }
  return res;
}
