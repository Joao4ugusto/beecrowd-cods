#include <stdio.h>
#include <stdlib.h>

int main(){

    double A, B, C, MIDIA;

    scanf("%lf", &A);
    scanf("%lf", &B);
    scanf("%lf", &C);

    MIDIA = (A * 2 + B * 3 + C * 5) / 10;

    printf("MIDIA = %.1lf\n", MIDIA);

    return 0;
}