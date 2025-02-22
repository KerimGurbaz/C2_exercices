#include <stdio.h>
#include <math.h>

double powerResult;

int modResult;

float res;

int main() {
    int a = 17, b = 5;
    if (b != 0) {
        modResult = a % b;
        printf("Mod : %d %% %d = %d\n", a, b, modResult);

    } else {
        printf("Erreur de division par zero!\n");
    }

    double base = 2.5, exponent = 3.0;
    powerResult = pow(base, exponent);
    printf("Pow : %.2f ^ %.2f = %.2f\n", base, exponent, powerResult);

    powerResult = 1;
    for (int i = 0; i < exponent; ++i) {
        powerResult *= base;
    }

    printf("%.2f uzeri %.2f =%.2f\n", base, exponent, powerResult);

    res = (powerResult + modResult) / 2;

    printf("Moyenne :( %.2f + %.2f)/2 = %.2f", powerResult, modResult, res);




    return 0;
}
