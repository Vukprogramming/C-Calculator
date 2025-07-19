#include <stdio.h>
#include "arithmetic.h"

int main() {
    double a;
    double b;

    printf("Enter the first number: \n");
    scanf("%lf", &a);

    printf("Enter the second number: \n");
    scanf("%lf", &b);

    add_frs(a, b);
    printf("Addition Result: %lf\n", add_res);

    sub_frs(a, b);
    printf("Subtraction Result: %lf\n", sub_res);

    mul_frs(a, b);
    printf("Multiplication Result: %lf\n", mul_res);

    div_frs(a, b);
    printf("Division Result: %lf\n", div_res);

    return 0;
}