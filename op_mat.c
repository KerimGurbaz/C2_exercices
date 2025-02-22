#include <stdio.h>

float result;

int main() {

    int nbr1 = 10, nbr2 = 5;

    result = nbr1 + nbr2;

    printf("sum : %d + %d = %.2f\n", nbr1, nbr2, result);


    // 2. Soustraction de deux nombres décimaux

    float nbr3 = 7.5, nbr4 = 2.3;
    result = nbr3 - nbr4;

    printf("sub : %.2f - %.2f = %.2f\n", nbr3, nbr4, result);

    //Multiplication de deux entiers
    int nbr5 = 4, nbr6 = 5;
    result = nbr5 * nbr6;
    printf("multiplication : %d * %d = %2.f\n", nbr5, nbr6, result);

    // Division de deux nombres decimaux
    float number1 = 15.0, number2 = 3.0;

    if (number2 != 0) {
        result = number1 / number2;
        printf("Division : %.2f / %.2f = %.2f\n", number1, number2, result);
    } else {
        printf("Erreur de division par zéro !\n");
    }
    return 0;
}
