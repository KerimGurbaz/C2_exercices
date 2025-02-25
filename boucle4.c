#include <stdio.h>

int main() {
    // int nbr;
    // int nbrInvers = 0;
    // int dernier;
    // printf("saisir un number : ");
    // scanf("%d", &nbr);

    // do {

    //     dernier = nbr % 10;

    //     nbrInvers = nbrInvers * 10 + dernier;

    //     nbr /= 10;
    // }
    // while (nbr > 0);

    // printf("%d", nbrInvers);

//     int nbr, nbTemp, reste;
//     int nbrInverse = 0;

//     printf("saisir un number : ");
//     scanf("%d", &nbr);
//     nbTemp = nbr;

//     do {
//         reste = nbr % 10;
//         nbrInverse = nbrInverse * 10 + reste;
//         nbr /= 10;
//     }
//     while (nbr != 0);

//     printf("Nombre original est %d , mais l'inverse est %d\n ", nbTemp, nbrInverse);

//     return 0;
// }


    int nbr, nbrTem, rest;
    int inverse = 0;

    printf("Saisir une number : ");
    scanf("%d", &nbr);
    nbrTem = nbr;

    do {
        rest = nbr % 10;
        inverse = inverse * 10 + rest;
        nbr /= 10;
    }
    while (nbr != 0);

    if (nbrTem == inverse) {
        printf("votre nb est %d , et l'inverse est %d donc il est palindrom", nbrTem, inverse);
    } else {
        printf("votre nb est %d , et l'inverse est %d donc il n'est pas palindrom", nbrTem, inverse);
    }


}
