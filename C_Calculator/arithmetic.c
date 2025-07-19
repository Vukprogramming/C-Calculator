#include "arithmetic.h"

double add_res;
double sub_res;
double mul_res;
double div_res;

void add_frs(double a, double b) {
    add_res = a + b;
}

void sub_frs(double a, double b) {
    sub_res = a - b;
}

void mul_frs(double a, double b) {
    mul_res = a * b;
}

void div_frs(double a, double b) {
    if (b != 0)
        div_res = a / b;
    else
        div_res = 0;
}