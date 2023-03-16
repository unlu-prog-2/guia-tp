#include <string.h>
#include <printf.h>
#include "assert.h"

void assert_str_eq(char *real, char *esperado) {
    if (strcmp(real, esperado) != 0) {
        printf("%s Valor recibido '%s' es distinto al esperado '%s'.\n", ERROR, real, esperado);
    }
}

void assert_int_eq(int real, int esperado) {
    if (real != esperado) {
        printf("%s Valor recibido '%d' es distinto al esperado '%d'.\n", ERROR, real, esperado);
    }
}

void assert_int_gt(int real, int esperado) {
    if (real <= esperado) {
        printf("%s Valor recibido '%d' NO es mayor al esperado '%d'.\n", ERROR, real, esperado);
    }
}

void assert_int_gte(int real, int esperado) {
    if (real < esperado) {
        printf("%s Valor recibido '%d' NO es mayor o igual al esperado '%d'.\n", ERROR, real, esperado);
    }
}

void assert_int_lt(int real, int esperado) {
    if (real >= esperado) {
        printf("%s Valor recibido '%d' NO es menor al esperado '%d'.\n", ERROR, real, esperado);
    }
}

void assert_int_lte(int real, int esperado) {
    if (real > esperado) {
        printf("%s Valor recibido '%d' NO es menor o igual al esperado '%d'.\n", ERROR, real, esperado);
    }
}

void assert_float_eq(float real, float esperado) {
    if (real != esperado) {
        printf("%s Valor recibido '%f' es distinto al esperado '%f'.\n", ERROR, real, esperado);
    }
}

void assert_float_gt(float real, float esperado) {
    if (real <= esperado) {
        printf("%s Valor recibido '%f' NO es mayor al esperado '%f'.\n", ERROR, real, esperado);
    }
}

void assert_float_gte(float real, float esperado) {
    if (real < esperado) {
        printf("%s Valor recibido '%f' NO es mayor o igual al esperado '%f'.\n", ERROR, real, esperado);
    }
}

void assert_float_lt(float real, float esperado) {
    if (real >= esperado) {
        printf("%s Valor recibido '%f' NO es menor al esperado '%f'.\n", ERROR, real, esperado);
    }
}

void assert_float_lte(float real, float esperado) {
    if (real > esperado) {
        printf("%s Valor recibido '%f' NO es menor o igual al esperado '%f'.\n", ERROR, real, esperado);
    }
}
