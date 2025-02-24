#include <stdio.h>

int main() {
    int somme = 0;

    for (int i = 0; i <= 100; ++i) {
        somme += i;

        printf("La somme est : %d\n", somme);

    }

    printf("\n");

    int total = 0;

    for (int i = 0; i <= 100; i += 2) {
        total += i;

    }
    printf("La total est : %d \n", total);

    int n = 10;
    long long  factorial = 1;
    long long sqrt = 0;

    for (int i = 1; i <= 10; ++i) {
        factorial *= i;
        sqrt += i * i;

    }

    printf("%d! = %lld\n", n, factorial);
    printf("%lld", sqrt);



    return 0;
}
