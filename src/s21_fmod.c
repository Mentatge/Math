#include "s21_math.h"

int nan_answer(double x, double y);

long double s21_fmod(double x, double y) {
  if (nan_answer(x, y)) return S21_NAN;
  if (S21_IS_INF(y)) return (long double)x;
  long long int mod = 0;
  mod = x / y;
  long double res = (long double)x - mod * (long double)y;
  return res;
}

int nan_answer(double x, double y) {
  int A = (y == 0);
  int B = S21_IS_INF(x);
  int C = S21_IS_INF(y);
  int D = (B && C && x != y);
  return (A || B || D);
}