#include "s21_math.h"

long double s21_pow(double base, double exp) {
  long double res;
  long double copy = base;
  if (exp == 0) {
    // printf("1");
    res = 1;
  } else if (copy == 0 && (exp != exp) == 0 && (exp != S21_INF_NEG)) {
    // printf("%f", exp);
    // printf("2");
    res = 0;
  } else if (copy != copy || exp != exp) {
    // printf("3");
    res = S21_NAN;
  }
  // else if (copy == S21_INF_NEG || exp == S21_INF_NEG) {
  //     res = 0;
  // }
  else if (copy == S21_INF_POS && exp == S21_INF_NEG) {
    // printf("5");
    res = 0;
  } else if (copy == S21_INF_NEG && exp == S21_INF_POS) {
    // printf("7");
    res = S21_INF_POS;
  } else if (copy == S21_INF_POS || exp == S21_INF_POS) {
    // printf("6");
    res = S21_INF_POS;
  } else if (exp > 19) {
    // printf("8");
    res = s21_pow_int(copy, exp);
  } else {
    // printf("9");
    if (copy < 0) {
      copy = -copy;
      res = s21_exp(exp * s21_log(copy));
      if (s21_fmod(exp, 2) != 0) {
        res = -res;
      }
    } else {
      res = s21_exp(exp * s21_log(copy));
    }
  }
  // printf("\nres beformae return: %Lf\n", res);
  return res;
}
