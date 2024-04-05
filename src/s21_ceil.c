#include "s21_math.h"

long double s21_ceil(double x) {
  long double res = (long long int)x;
  if (x != x) {
    res = S21_NAN;
  } else if (x == S21_INF_NEG) {
    res = S21_INF_NEG;
  } else if (x == S21_INF_POS) {
    res = S21_INF_POS;
  } else {
    res += (x > 0 && (x - res));
    if (res == 0 && x < 0) res = -res;
  }
  return res;
}
