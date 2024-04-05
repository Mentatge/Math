#include <check.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#include "s21_math.h"

START_TEST(tan_tests) {
  ck_assert_ldouble_eq_tol(tan(8.78), s21_tan(8.78), 0.000001);
  ck_assert_ldouble_eq_tol(tan(9.78), s21_tan(9.78), 0.000001);
  ck_assert_ldouble_eq_tol(tan(10.78), s21_tan(10.78), 0.000001);
  ck_assert_ldouble_eq_tol(tan(-11.78), s21_tan(-11.78), 0.000001);
  ck_assert_double_eq_tol(tan(-1.78), s21_tan(-1.78), 0.000001);
  ck_assert_int_eq(s21_tan(S21_INF_POS), tan(S21_INF_POS));
  ck_assert_int_eq(s21_tan((int)NAN), tan((int)NAN));
  ck_assert_ldouble_nan(s21_tan(S21_INF_NEG));
  ck_assert_ldouble_nan(tan(S21_INF_NEG));
}
END_TEST

START_TEST(sin_tests) {
  ck_assert_ldouble_eq_tol(sin(9.67), s21_sin(9.67), 0.000001);
  ck_assert_ldouble_eq_tol(sin(-68.32), s21_sin(-68.32), 0.000001);
  ck_assert_ldouble_eq_tol(sin(678.3), s21_sin(678.3), 0.000001);
  ck_assert_ldouble_eq_tol(sin(3.14), s21_sin(3.14), 0.000001);
  ck_assert_int_eq(s21_sin((int)S21_INF_NEG), sin((int)S21_INF_POS));
  ck_assert_int_eq(s21_sin((int)S21_NAN), sin((int)S21_NAN));
  ck_assert_int_eq(s21_sin((int)S21_INF_NEG), sin((int)S21_INF_NEG));
}
END_TEST

START_TEST(abs_tests) {
  ck_assert_ldouble_eq_tol(abs(0), s21_abs(0), 0.000001);
  ck_assert_ldouble_eq_tol(abs(-10), s21_abs(-10), 0.000001);
  ck_assert_int_eq(s21_abs((int)INFINITY), abs((int)INFINITY));
  ck_assert_int_eq(s21_abs((int)NAN), abs((int)NAN));
  ck_assert_int_eq(s21_abs((int)-INFINITY), abs((int)-INFINITY));
}
END_TEST

START_TEST(cos_tests) {
  ck_assert_ldouble_eq_tol(cos(3.54), s21_cos(3.54), 0.000001);
  ck_assert_ldouble_eq_tol(cos(6.32), s21_cos(6.32), 0.000001);
  ck_assert_ldouble_eq_tol(cos(11.2), s21_cos(11.2), 0.000001);
  ck_assert_ldouble_eq_tol(cos(-12.87), s21_cos(-12.87), 0.000001);
  ck_assert_ldouble_eq_tol(cos(-19.12), s21_cos(-19.12), 0.000001);
  ck_assert_ldouble_eq_tol(cos(89.11), s21_cos(89.11), 0.000001);
  ck_assert_ldouble_eq_tol(cos(-119.23), s21_cos(-119.23), 0.000001);
  ck_assert_int_eq(s21_cos((int)S21_INF_POS), cos((int)S21_INF_POS));
  ck_assert_int_eq(s21_cos((int)S21_NAN), cos((int)S21_NAN));
  ck_assert_int_eq(s21_cos((int)S21_INF_NEG), cos((int)S21_INF_NEG));
}
END_TEST

START_TEST(atan_tests) {
  ck_assert_ldouble_eq_tol(atan(56.3), s21_atan(56.3), 0.000001);
  ck_assert_ldouble_eq_tol(atan(-59.13), s21_atan(-59.13), 0.000001);
  ck_assert_ldouble_eq_tol(atan(0), s21_atan(0), 0.000001);
  ck_assert_ldouble_eq_tol(atan(1.2), s21_atan(1.2), 0.000001);
  ck_assert_int_eq(s21_atan((int)S21_INF_POS), atan((int)S21_INF_POS));
  ck_assert_int_eq(s21_atan((int)S21_NAN), atan((int)S21_NAN));
  ck_assert_int_eq(s21_atan((int)S21_INF_NEG), atan((int)S21_INF_NEG));
}
END_TEST

START_TEST(asin_tests) {
  ck_assert_ldouble_eq_tol(asin(0.154), s21_asin(0.154), 0.000001);
  ck_assert_ldouble_eq_tol(asin(0.568), s21_asin(0.568), 0.000001);
  ck_assert_ldouble_eq_tol(asin(0.785), s21_asin(0.785), 0.000001);
  ck_assert_ldouble_eq_tol(asin(0.985), s21_asin(0.985), 0.000001);
  ck_assert_ldouble_eq_tol(asin(0.245), s21_asin(0.245), 0.000001);
  ;
  ck_assert_double_nan(s21_asin(-INFINITY));
  ck_assert_int_eq(s21_asin((int)NAN), asin((int)NAN));
  ck_assert_int_eq(s21_asin((int)INFINITY), asin((int)INFINITY));
}
END_TEST

START_TEST(acos_tests) {
  ck_assert_ldouble_eq_tol(acos(0.45), s21_acos(0.45), 0.000001);
  ck_assert_ldouble_eq_tol(acos(0.99), s21_acos(0.99), 0.000001);
  ck_assert_ldouble_eq_tol(acos(0.21), s21_acos(0.21), 0.000001);
  ck_assert_ldouble_eq_tol(acos(0.08), s21_acos(0.08), 0.000001);
  ck_assert_ldouble_eq_tol(acos(0.56), s21_acos(0.56), 0.000001);
  ck_assert_ldouble_eq_tol(acos(0.78), s21_acos(0.78), 0.000001);
  ck_assert_ldouble_eq_tol(acos(-0.91), s21_acos(-0.91), 0.000001);
  ck_assert_int_eq(s21_acos((int)INFINITY), acos((int)INFINITY));
  ck_assert_ldouble_nan(s21_acos(NAN));
  ck_assert_int_eq(s21_acos((int)-INFINITY), acos((int)-INFINITY));
}
END_TEST

START_TEST(s21_exp_test1) {
  ck_assert_ldouble_eq(s21_exp(25048.369), exp(25048.369));
}
END_TEST

START_TEST(s21_exp_test2) {
  ck_assert_ldouble_eq_tol(s21_exp(-14.96), exp(-14.96), 0.000001);
}
END_TEST

START_TEST(s21_exp_test3) {
  ck_assert_ldouble_eq(s21_exp(INFINITY), exp(INFINITY));
}
END_TEST

START_TEST(s21_exp_test4) {
  ck_assert_ldouble_nan(s21_exp(NAN));
  ck_assert_ldouble_nan(exp(NAN));
}
END_TEST

START_TEST(s21_exp_test5) {
  ck_assert_ldouble_eq(s21_exp(-INFINITY), exp(-INFINITY));
}
END_TEST

START_TEST(s21_exp_test6) {
  ck_assert_ldouble_eq_tol(s21_exp(0), exp(0), 0.000001);
}
END_TEST

START_TEST(s21_exp_test7) {
  ck_assert_ldouble_eq_tol(s21_exp(1), exp(1), 0.000001);
}
END_TEST

START_TEST(s21_exp_test8) {
  ck_assert_ldouble_eq_tol(s21_exp(-1), exp(-1), 0.000001);
}
END_TEST

START_TEST(s21_sqrt_test1) {
  ck_assert_ldouble_nan(s21_sqrt(-0.01));
  ck_assert_ldouble_nan(sqrt(-0.01));
}
END_TEST

START_TEST(s21_sqrt_test2) {
  ck_assert_ldouble_infinite(s21_sqrt(S21_INF_POS));
  ck_assert_ldouble_infinite(sqrt(S21_INF_POS));
}
END_TEST

START_TEST(s21_sqrt_test3) {
  ck_assert_ldouble_nan(s21_sqrt(NAN));
  ck_assert_ldouble_nan(sqrt(NAN));
}
END_TEST

START_TEST(s21_sqrt_test4) {
  ck_assert_ldouble_nan(s21_sqrt(-INFINITY));
  ck_assert_ldouble_nan(sqrt(-INFINITY));
}
END_TEST

START_TEST(s21_sqrt_test5) {
  ck_assert_ldouble_nan(s21_sqrt(-231.41));
  ck_assert_ldouble_nan(sqrt(-231.41));
}
END_TEST

START_TEST(s21_sqrt_test6) {  // МОЖЕТ стоит убрать?? слишком большшое по
                              // времени сполнения, оставить там 5-6 тестов
                              // ускорим время работы тестов
  long double arr[] = {5898.467, 8427.928,  5698.0035, 1289.244, 7025.7,
                       12.1357,  4745.5,    2930.637,  8187.391, 1015.89,
                       3155.844, 3954.143,  2862.1,    2782.954, 5097.545,
                       2630.4,   1075.747,  1889.786,  1782,     0.0001,
                       21345678, 7432,      0.3245,    12345,    13456,
                       0.03213,  324.42342, 0,         50,       0.24};
  for (int i = 0; i < 30; i++) {
    ck_assert_ldouble_eq_tol(s21_sqrt(arr[i]), sqrt(arr[i]), 0.000001);
  }
}

START_TEST(s21_floor_test1) {
  ck_assert_ldouble_eq_tol(s21_floor(-0.98), floor(-0.98), 0.000001);
}
END_TEST

START_TEST(s21_floor_test2) {
  ck_assert_ldouble_eq_tol(s21_floor(0.98), floor(0.98), 0.000001);
}
END_TEST

START_TEST(s21_floor_test3) {
  ck_assert_ldouble_eq_tol(s21_floor(-10.44), floor(-10.44), 0.000001);
}
END_TEST

START_TEST(s21_floor_test4) {
  ck_assert_ldouble_eq(s21_floor(INFINITY), floor(INFINITY));
}
END_TEST

START_TEST(s21_floor_test5) {
  ck_assert_ldouble_nan(s21_floor(NAN));
  ck_assert_ldouble_nan(floor(NAN));
}
END_TEST

START_TEST(s21_floor_test6) {
  ck_assert_ldouble_eq(s21_floor(-INFINITY), floor(-INFINITY));
}
END_TEST

START_TEST(s21_floor_test7) {
  ck_assert_ldouble_eq_tol(s21_floor(-15000), floor(-15000), 0.000001);
}
END_TEST

START_TEST(s21_ceil_test1) {
  ck_assert_ldouble_eq_tol(s21_ceil(-0.123), ceil(-0.123), 0.000001);
}
END_TEST

START_TEST(s21_ceil_test2) {
  ck_assert_ldouble_eq_tol(s21_ceil(-322.228), ceil(-322.228), 0.000001);
}
END_TEST

START_TEST(s21_ceil_test3) {
  ck_assert_ldouble_eq(s21_ceil(INFINITY), ceil(INFINITY));
}
END_TEST

START_TEST(s21_ceil_test4) {
  ck_assert_ldouble_nan(s21_ceil(NAN));
  ck_assert_ldouble_nan(ceil(NAN));
}
END_TEST

START_TEST(s21_ceil_test5) {
  ck_assert_ldouble_eq(s21_ceil(-INFINITY), ceil(-INFINITY));
}
END_TEST

START_TEST(s21_ceil_test6) {
  ck_assert_ldouble_eq_tol(s21_ceil(50), ceil(50), 0.000001);
}
END_TEST

START_TEST(s21_pow_test1) {
  ck_assert_ldouble_eq_tol(s21_pow(20, 0.4), pow(20, 0.4), 0.000001);
}
END_TEST

START_TEST(s21_pow_test2) {
  ck_assert_ldouble_eq_tol(s21_pow(20, 1), pow(20, 1), 0.000001);
}
END_TEST

START_TEST(s21_pow_test3) {
  ck_assert_ldouble_eq_tol(s21_pow(20, 0.001), pow(20, 0.001), 0.000001);
}
END_TEST

START_TEST(s21_pow_test4) {
  ck_assert_ldouble_eq_tol(s21_pow(20, -10), pow(20, -10), 0.000001);
}
END_TEST

START_TEST(s21_pow_test5) {
  ck_assert_ldouble_eq_tol(s21_pow(20, 5), pow(20, 5), 0.000001);
}
END_TEST

START_TEST(s21_pow_test6) {
  ck_assert_ldouble_eq_tol(s21_pow(20, 5), pow(20, 5), 0.000001);
}
END_TEST

START_TEST(s21_pow_test7) {
  ck_assert_ldouble_eq_tol(s21_pow(20, 20), pow(20, 20), 0.000001);
}
END_TEST

START_TEST(s21_pow_test8) {
  ck_assert_ldouble_eq_tol(s21_pow(0.1, 10), pow(0.1, 10), 0.000001);
}
END_TEST

START_TEST(s21_pow_test9) {
  ck_assert_ldouble_eq_tol(s21_pow(0, 10), pow(0, 10), 0.000001);
}
END_TEST

START_TEST(s21_pow_test10) {
  ck_assert_ldouble_eq(s21_pow(INFINITY, INFINITY), pow(INFINITY, INFINITY));
}
END_TEST

START_TEST(s21_pow_test11) {
  ck_assert_ldouble_eq(s21_pow(-INFINITY, -INFINITY),
                       pow(-INFINITY, -INFINITY));
  ck_assert_ldouble_nan(s21_pow(0, NAN));
}
END_TEST

START_TEST(s21_pow_test12) {
  ck_assert_ldouble_nan(s21_pow(NAN, NAN));
  ck_assert_ldouble_nan(pow(NAN, NAN));
}
END_TEST

START_TEST(s21_pow_test13) {
  ck_assert_ldouble_nan(s21_pow(INFINITY, NAN));
  ck_assert_ldouble_nan(pow(INFINITY, NAN));
}
END_TEST

START_TEST(s21_pow_test14) {
  ck_assert_ldouble_nan(s21_pow(NAN, INFINITY));
  ck_assert_ldouble_nan(pow(NAN, INFINITY));
}
END_TEST

START_TEST(s21_pow_test15) {
  ck_assert_ldouble_nan(s21_pow(-INFINITY, NAN));
  ck_assert_ldouble_nan(pow(-INFINITY, NAN));
}
END_TEST

START_TEST(s21_pow_test16) {
  ck_assert_ldouble_nan(s21_pow(NAN, -INFINITY));
  ck_assert_ldouble_nan(pow(NAN, -INFINITY));
}
END_TEST

START_TEST(s21_pow_test17) {
  ck_assert_ldouble_eq(s21_pow(-INFINITY, INFINITY), pow(-INFINITY, INFINITY));
}
END_TEST

START_TEST(s21_pow_test18) {
  ck_assert_ldouble_eq(s21_pow(INFINITY, -INFINITY), pow(INFINITY, -INFINITY));
}
END_TEST

START_TEST(s21_pow_test20) {
  ck_assert_ldouble_eq_tol(s21_pow(INFINITY, 0), pow(INFINITY, 0), 0.000001);
}
END_TEST

START_TEST(s21_pow_test21) {
  ck_assert_ldouble_eq_tol(s21_pow(NAN, 0), pow(NAN, 0), 0.000001);
}
END_TEST

START_TEST(s21_pow_test22) {
  ck_assert_ldouble_eq(s21_pow(0, -INFINITY), pow(0, -INFINITY));
}
END_TEST

START_TEST(s21_pow_test23) {
  ck_assert_ldouble_eq_tol(s21_pow(0, INFINITY), pow(0, INFINITY), 0.000001);
}
END_TEST

START_TEST(s21_pow_test24) {
  ck_assert_ldouble_nan(s21_pow(0, S21_NAN));
  ck_assert_ldouble_nan(pow(0, S21_NAN));
}
END_TEST

START_TEST(s21_pow_test19) {
  ck_assert_ldouble_infinite(s21_pow(S21_INF_POS, S21_INF_POS));
  ck_assert_ldouble_infinite(pow(S21_INF_POS, S21_INF_POS));
}
END_TEST

START_TEST(s21_log_test1) {
  ck_assert_ldouble_eq_tol(s21_log(26941.289), log(26941.289), 0.000001);
}
END_TEST

START_TEST(s21_log_test2) {
  ck_assert_ldouble_nan(s21_log(-12.36));
  ck_assert_ldouble_nan(log(-12.36));
}
END_TEST

START_TEST(s21_log_test3) {
  ck_assert_ldouble_infinite(s21_log(S21_INF_POS));
  ck_assert_ldouble_infinite(log(S21_INF_POS));
}
END_TEST

START_TEST(s21_log_test4) {
  ck_assert_ldouble_nan(s21_log(NAN));
  ck_assert_ldouble_nan(log(NAN));
}
END_TEST

START_TEST(s21_log_test5) {
  ck_assert_ldouble_nan(s21_log(S21_INF_NEG));
  ck_assert_ldouble_nan(log(S21_INF_NEG));
}
END_TEST

START_TEST(s21_log_test6) { ck_assert_ldouble_eq(s21_log(0), log(0)); }
END_TEST

START_TEST(s21_log_test7) { ck_assert_ldouble_eq(s21_log(1), log(1)); }
END_TEST

START_TEST(fabs_tests) {
  for (double i = -50.78; i <= 50; i += 16.42) {
    ck_assert_ldouble_eq_tol(fabs(i), s21_fabs(i), 0.000001);
  }
  ck_assert_ldouble_nan(s21_fabs(S21_NAN));
  ck_assert_ldouble_nan(fabs(S21_NAN));
  ck_assert_ldouble_eq(s21_fabs((double)-INFINITY), fabs((double)-INFINITY));
}
END_TEST

START_TEST(s21_fabs_tests1) {
  ck_assert_ldouble_eq(s21_fabs((double)-03), fabs((double)-03));
}
END_TEST

START_TEST(s21_fmod_test1) {
  ck_assert_ldouble_nan(s21_fmod(NAN, NAN));
  ck_assert_ldouble_nan(fmod(NAN, NAN));
}
END_TEST

START_TEST(s21_fmod_test2) {
  ck_assert_ldouble_nan(s21_fmod(-INFINITY, -INFINITY));
  ck_assert_ldouble_nan(fmod(-INFINITY, -INFINITY));
}
END_TEST

START_TEST(s21_fmod_test3) {
  ck_assert_ldouble_nan(s21_fmod(-INFINITY, INFINITY));
  ck_assert_ldouble_nan(fmod(-INFINITY, INFINITY));
}
END_TEST

START_TEST(s21_fmod_test4) {
  ck_assert_ldouble_nan(s21_fmod(INFINITY, INFINITY));
  ck_assert_ldouble_nan(fmod(INFINITY, INFINITY));
}
END_TEST

START_TEST(s21_fmod_test5) {
  ck_assert_ldouble_nan(s21_fmod(NAN, INFINITY));
  ck_assert_ldouble_nan(fmod(NAN, INFINITY));
}
END_TEST

START_TEST(s21_fmod_test6) {
  ck_assert_ldouble_nan(s21_fmod(-INFINITY, NAN));
  ck_assert_ldouble_nan(fmod(-INFINITY, NAN));
}
END_TEST

START_TEST(s21_fmod_test7) {
  ck_assert_ldouble_nan(s21_fmod(NAN, -INFINITY));
  ck_assert_ldouble_nan(fmod(NAN, -INFINITY));
}
END_TEST

START_TEST(s21_fmod_test8) {
  ck_assert_ldouble_nan(s21_fmod(INFINITY, NAN));
  ck_assert_ldouble_nan(fmod(INFINITY, NAN));
}
END_TEST

START_TEST(s21_fmod_test9) {
  ck_assert_ldouble_nan(s21_fmod(INFINITY, -INFINITY));
  ck_assert_ldouble_nan(fmod(INFINITY, -INFINITY));
}
END_TEST

START_TEST(s21_fmod_test10) {
  ck_assert_ldouble_nan(s21_fmod(INFINITY, 3));
  ck_assert_ldouble_nan(fmod(INFINITY, 3));
}
END_TEST

START_TEST(s21_fmod_test11) {
  ck_assert_ldouble_nan(s21_fmod(-INFINITY, 2));
  ck_assert_ldouble_nan(fmod(-INFINITY, 2));
}
END_TEST

START_TEST(s21_fmod_test12) {
  ck_assert_ldouble_nan(s21_fmod(NAN, 1));
  ck_assert_ldouble_nan(fmod(NAN, 1));
}
END_TEST

START_TEST(s21_fmod_test13) {
  ck_assert_ldouble_eq(s21_fmod(100, INFINITY), fmod(100, INFINITY));
}
END_TEST

START_TEST(s21_fmod_test14) {
  ck_assert_ldouble_eq(s21_fmod(100, -INFINITY), fmod(100, -INFINITY));
}
END_TEST

START_TEST(s21_fmod_test15) {
  ck_assert_ldouble_eq(s21_fmod(0, INFINITY), fmod(0, INFINITY));
}
END_TEST

START_TEST(s21_fmod_test16) {
  ck_assert_ldouble_eq(s21_fmod(0, -INFINITY), fmod(0, -INFINITY));
}
END_TEST

START_TEST(s21_fmod_test17) {
  ck_assert_ldouble_nan(s21_fmod(0, NAN));
  ck_assert_ldouble_nan(fmod(0, NAN));
}
END_TEST

START_TEST(s21_fmod_test18) {
  ck_assert_ldouble_nan(s21_fmod(INFINITY, 0));
  ck_assert_ldouble_nan(fmod(INFINITY, 0));
}
END_TEST

START_TEST(s21_fmod_test19) {
  ck_assert_ldouble_nan(s21_fmod(-INFINITY, 0));
  ck_assert_ldouble_nan(fmod(-INFINITY, 0));
}
END_TEST

START_TEST(s21_fmod_test20) {
  ck_assert_ldouble_nan(s21_fmod(NAN, 0));
  ck_assert_ldouble_nan(fmod(NAN, 0));
}
END_TEST

START_TEST(s21_fmax_test1) {
  ck_assert_ldouble_eq(s21_fmax(-3, 2), 2);
  ck_assert_ldouble_eq(s21_fmax(3, -2), 3);
}
END_TEST

START_TEST(s21_fmod_main) {
  long double f_value[] = {4234, 20,      234,    -756,   435,    24.342, 345,
                           645,  2.24234, 53.534, 6456,   1,      0,      -1,
                           34,   64,      9786,   534.53, 756.56, 754};
  long double s_value[] = {8898.07, 6881.63, 1537.52, 5783.31,
                           2675.7,  // может стоить убрать
                                    // половину?
                           5560.06, 1240.69, 9348.66, 103.02, 4153.9, 250, 29.3,
                           96.456, 86, 29.5, 302.0234, 1, 1947.38, 953, 42};
  for (int i = 0; i < 20; i++) {
    ck_assert_double_eq_tol(s21_fmod(f_value[i], s_value[i]),
                            fmod(f_value[i], s_value[i]), 0.000001);
  }
}

Suite *example_suite_create(void) {
  Suite *suite = suite_create("math_tests");
  // Набор разбивается на группы тестов, разделённых по каким-либо критериям.
  TCase *tcase_core = tcase_create("S21_MATH");

  // Добавление теста в группу тестов.
  tcase_add_test(tcase_core, tan_tests);
  tcase_add_test(tcase_core, sin_tests);
  tcase_add_test(tcase_core, abs_tests);
  tcase_add_test(tcase_core, cos_tests);
  tcase_add_test(tcase_core, atan_tests);
  tcase_add_test(tcase_core, acos_tests);
  tcase_add_test(tcase_core, asin_tests);
  tcase_add_test(tcase_core, fabs_tests);
  tcase_add_test(tcase_core, s21_log_test1);
  tcase_add_test(tcase_core, s21_log_test2);  // NAN
  tcase_add_test(tcase_core, s21_log_test3);  // INFINITY
  tcase_add_test(tcase_core, s21_log_test4);  // NAN
  tcase_add_test(tcase_core, s21_log_test5);  //-INFINITY
  tcase_add_test(tcase_core, s21_log_test6);  // 0
  tcase_add_test(tcase_core, s21_log_test7);  // 1
  tcase_add_test(tcase_core, s21_pow_test1);
  tcase_add_test(tcase_core, s21_pow_test1);
  tcase_add_test(tcase_core, s21_pow_test2);
  tcase_add_test(tcase_core, s21_pow_test3);
  tcase_add_test(tcase_core, s21_pow_test4);
  tcase_add_test(tcase_core, s21_pow_test5);
  tcase_add_test(tcase_core, s21_pow_test6);
  tcase_add_test(tcase_core, s21_pow_test7);
  tcase_add_test(tcase_core, s21_pow_test8);
  tcase_add_test(tcase_core, s21_pow_test9);
  tcase_add_test(tcase_core, s21_pow_test10);
  tcase_add_test(tcase_core, s21_pow_test11);
  tcase_add_test(tcase_core, s21_pow_test12);
  tcase_add_test(tcase_core, s21_pow_test13);
  tcase_add_test(tcase_core, s21_pow_test14);
  tcase_add_test(tcase_core, s21_pow_test15);
  tcase_add_test(tcase_core, s21_pow_test16);
  tcase_add_test(tcase_core, s21_pow_test17);
  tcase_add_test(tcase_core, s21_pow_test18);
  tcase_add_test(tcase_core, s21_pow_test19);
  tcase_add_test(tcase_core, s21_pow_test20);
  tcase_add_test(tcase_core, s21_pow_test21);
  tcase_add_test(tcase_core, s21_pow_test22);
  tcase_add_test(tcase_core, s21_pow_test23);
  tcase_add_test(tcase_core, s21_pow_test24);
  tcase_add_test(tcase_core, s21_ceil_test1);
  tcase_add_test(tcase_core, s21_ceil_test2);
  tcase_add_test(tcase_core, s21_ceil_test3);
  tcase_add_test(tcase_core, s21_ceil_test4);
  tcase_add_test(tcase_core, s21_ceil_test5);
  tcase_add_test(tcase_core, s21_ceil_test6);
  tcase_add_test(tcase_core, s21_floor_test1);
  tcase_add_test(tcase_core, s21_floor_test2);
  tcase_add_test(tcase_core, s21_floor_test3);
  tcase_add_test(tcase_core, s21_floor_test4);
  tcase_add_test(tcase_core, s21_floor_test5);
  tcase_add_test(tcase_core, s21_floor_test6);
  tcase_add_test(tcase_core, s21_floor_test7);
  tcase_add_test(tcase_core, s21_sqrt_test1);
  tcase_add_test(tcase_core, s21_sqrt_test2);
  tcase_add_test(tcase_core, s21_sqrt_test3);
  tcase_add_test(tcase_core, s21_sqrt_test4);
  tcase_add_test(tcase_core, s21_sqrt_test5);
  tcase_add_test(tcase_core, s21_sqrt_test6);
  tcase_add_test(tcase_core, s21_exp_test1);
  tcase_add_test(tcase_core, s21_exp_test2);
  tcase_add_test(tcase_core, s21_exp_test3);
  tcase_add_test(tcase_core, s21_exp_test4);
  tcase_add_test(tcase_core, s21_exp_test5);
  tcase_add_test(tcase_core, s21_exp_test6);
  tcase_add_test(tcase_core, s21_exp_test7);
  tcase_add_test(tcase_core, s21_exp_test8);
  tcase_add_test(tcase_core, s21_fmod_test1);
  tcase_add_test(tcase_core, s21_fmod_test2);
  tcase_add_test(tcase_core, s21_fmod_test3);
  tcase_add_test(tcase_core, s21_fmod_test4);
  tcase_add_test(tcase_core, s21_fmod_test5);
  tcase_add_test(tcase_core, s21_fmod_test6);
  tcase_add_test(tcase_core, s21_fmod_test7);
  tcase_add_test(tcase_core, s21_fmod_test8);
  tcase_add_test(tcase_core, s21_fmod_test9);
  tcase_add_test(tcase_core, s21_fmod_test10);
  tcase_add_test(tcase_core, s21_fmod_test11);
  tcase_add_test(tcase_core, s21_fmod_test12);
  tcase_add_test(tcase_core, s21_fmod_test13);
  tcase_add_test(tcase_core, s21_fmod_test14);
  tcase_add_test(tcase_core, s21_fmod_test15);
  tcase_add_test(tcase_core, s21_fmod_test16);
  tcase_add_test(tcase_core, s21_fmod_test17);
  tcase_add_test(tcase_core, s21_fmod_test18);
  tcase_add_test(tcase_core, s21_fmod_test19);
  tcase_add_test(tcase_core, s21_fmod_test20);
  tcase_add_test(tcase_core, s21_fmod_main);
  tcase_add_test(tcase_core, s21_fabs_tests1);
  tcase_add_test(tcase_core, s21_fmax_test1);
  // Добавление теста в тестовый набор.
  suite_add_tcase(suite, tcase_core);

  return suite;
}

int main(void) {
  Suite *s21_math = example_suite_create();
  SRunner *s21_math_runner = srunner_create(s21_math);
  int failed = 0;
  srunner_run_all(s21_math_runner, CK_ENV);
  failed = srunner_ntests_failed(s21_math_runner);
  srunner_free(s21_math_runner);
  return failed == 0 ? 0 : 1;
}