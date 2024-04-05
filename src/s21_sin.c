#include "s21_math.h"

long double s21_sin(double x) {
  long double res = 0;
  if (x == S21_INF_NEG || x == S21_INF_POS || x == S21_NAN) {
    res = S21_NAN;
  } else {
    for (; x < -2 * S21_PI || x > 2 * S21_PI;) {
      if (x > 2 * S21_PI) {
        x -= 2 * S21_PI;
      } else if (x < -2 * S21_PI) {
        x += 2 * S21_PI;
      }
    }
    for (int i = 0; i < 50; i++) {
      res += (s21_pow(-1, i) * s21_pow(x, 1 + 2 * i)) / s21_fctr(1 + 2 * i);
    }
  }
  return res;
}