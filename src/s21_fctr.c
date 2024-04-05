#include "s21_math.h"

long double s21_fctr(int x) { return (x < 2) ? 1 : x * s21_fctr(x - 1); }
