#ifndef TP0_ASSERT_H
#define TP0_ASSERT_H

#define ERROR "\x1b[31m Error \x1b[0m"

#define OK "\x1b[32m OK \x1b[0m"


#include <string.h>
#include <printf.h>
#include "assert.h"

void assert_str_eq(char *real, char *esperado);

void assert_int_eq(int real, int esperado);

void assert_int_gt(int real, int esperado);

void assert_int_gte(int real, int esperado);

void assert_int_lt(int real, int esperado);

void assert_int_lte(int real, int esperado);

void assert_float_eq(float real, float esperado);

void assert_float_gt(float real, float esperado);

void assert_float_gte(float real, float esperado);

void assert_float_lt(float real, float esperado);

void assert_float_lte(float real, float esperado);

void assert_double_eq(double real, double esperado);

void assert_double_gt(double real, double esperado);

void assert_double_gte(double real, double esperado);

void assert_double_lt(double real, double esperado);

void assert_double_lte(double real, double esperado);

#endif // TP0_ASSERT_H
