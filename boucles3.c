#include <stdio.h>

int main() {
    // int i = 10;
    // while (i-- > 0) {
    //     printf("%d ", i);
    // }
    // printf("\n");

    // int k = 1;
    // while (k <= 8) {
    //     printf("%d ", k);
    //     k *= 2;
    // }

    // int nbr = 1;
    // int total = 0;
    // printf("entrez un chiffre stp : ");
    // while (nbr != 0) {
    //     scanf("%d", &nbr);

    //     total += nbr;
    // }
    // printf("La somme total est : %d ", total);

    // int nb, somme = 0;

    // printf("Entrez les nombres à additioner(entrez 0 pour terminer) : \n");

    // int somme = 0;
    // int count = 0;
    // float moyenne;
    // int nbr;
    // while (1) {
    //     scanf("%d", &nbr);
    //     if (nbr < 0) {
    //         break;
    //     }
    //     ++count;
    //     somme += nbr;
    //     moyenne = somme / count;
    // }
    // printf("vouz avez entree %d nombres, les moyennes est  %.2f : ", count, moyenne);

    // int count = 0, somme = 0;
    // int nb;

    // while (somme <= 100) {
    //     ++count;
    //     scanf("%d", &nb);
    //     somme += nb;
    // }
    // printf("vous avez entre %d nombres , les totales sont %d\n", count, somme);

    int nb;
    int nmbrPos = 0;
    int nmbNeg = 0;

    while (1) {
        scanf("%d", &nb);
        if (nb < 0) {
            nmbNeg += nb;
        } else if (nb > 0) {
            nmbrPos += nb;
        } else {
            break;
        }
    }
    printf("les nobres positif  est : %d\n", nmbrPos);
    printf("les nobres negatif  est : %d\n", nmbNeg);

    return 0;
}
