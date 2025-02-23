#include <stdio.h>

int main() {

    int num, n1, n2, n3;
    printf("entrez un number : ");
    // scanf("%d", &num);
    if (!(num % 3 && num % 13)) {
        printf("%d est divisible par 3 et 17.\n", num);
    } else {
        printf("%d n'est pas divisible par 3 et 17.\n", num);
    }

    printf("Saisir n1 : ");
    //scanf("%d", &n1),

    printf("Saisir n2 : ");
    //scanf("%d", &n2);

    printf("Saisir n3 : ");
    //scanf("%d", &n3);

    if (n1 > n2 && n1 > n3) {
        printf("Le maximum est : %d.\n", n1);
    } else if (n2 > n1 && n2 > n3) {
        printf("Le maximum est : %d.\n", n1);
    } else if (n3 > n1 && n3 > n2) {
        printf("Le maximum est : %d.\n", n1);
    }

    int nb1, nb2, nb3, min;
    printf("entrez trois nombres separes par des espaces : ");
    scanf("%d %d %d", &nb1, &nb2, &nb3);

    if (nb1 <= nb2 && nb1 <= nb3) {
        min = nb1;
    } else if (nb2 <= nb1 && nb2 <= nb3) {
        min = nb2;
    } else {
        min = nb3;
    }

    printf("Le minimum est : %d\n", min);

    return 0;
}
