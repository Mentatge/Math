#include "s21_math.h"

long double s21_log(double x) {
  double result = 0;
  double compair = 0;
  if (x == S21_INF_POS) {
    result = S21_INF_POS;
  } else if (x > 0) {
    if (x == 1) {
      result = 0;
    } else {
      for (int i = 0; i < 30; i++) {
        compair = result;
        result = compair + 2 * (x - s21_exp(compair)) / (x + s21_exp(compair));
      }
    }
  } else if (x == 0) {
    result = S21_INF_NEG;
  } else {
    result = S21_NAN;
  }
  return result;
}