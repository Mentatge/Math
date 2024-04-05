#include "s21_math.h"

long double s21_sqrt(double x) {
  long double res = 3;
  if (x == S21_INF_POS) {
    res = S21_INF_POS;
  } else if (x > 0) {
    for (int i = 0; i < 50; i++) {
      res = (1.0 / 2.0) * (res + (x / res));
    }
  } else if (x == 0) {
    res = 0;
  } else {
    res = S21_NAN;
  }
  return res;
}