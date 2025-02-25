#include <stdio.h>
#include <limits.h> //pour max et min values

int main() {

    // int nbr;
    // int max = 0;
    // printf("Entrez des nombres pour trouver le maximum(-1 pour terminer) ");

    // while (1) {
    //     scanf("%d", &nbr);
    //     if (nbr == -1) {
    //         break;
    //     }
    //     if (nbr > max) {
    //         max = nbr;
    //     }

    // }
    // printf("Le plus grand nombre est : %d,\n", max);


    // int nbr, min;
    // min = INT_MAX;
    // printf("Entrez des nombres pour trouver le plus petit nombre(-1 à la fin) : \n");

    // while (1) {
    //     scanf("%d", &nbr);
    //     if (nbr == -1)
    //         break;
    //     if (nbr < min) {
    //         min = nbr;
    //     }
    // }

    // if (min == INT_MAX) {
    //     printf("vous n'avez entré aucun chiffre.\n");
    // } else {
    //     printf("Le plus petit nombre est : %d\n", min);
    // }

    int nb;
    int count = 0;
    double moyenne = 0;
    int somme = 0;

    while (1) {
        scanf("%d", &nb);

        if (nb == -1)
            break;

        somme += nb;
        ++count;
    }
    if (count == 0) {
        printf("Aucun numero saisi");
    } else {
        moyenne = somme / count;
        printf("Somme : %d, Moyenne : %.2f\n", somme, moyenne);
    }




    return 0;
}
