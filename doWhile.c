#include <stdio.h>

int main() {
    // int i = 3;
    // do {
    //     printf("%d ", i);
    //     i++;

    // }
    // while (i <= 6);

    // printf("\n");
    // int age = 0;

    // do {
    //     scanf("%d", &age);
    //     if (age < 18)
    //         printf("Entrez votre age : %d\n", age);

    //     if (age > 18)
    //         printf("Acces accorde .");

    // }
    // while (age < 18);

    // int nbrSecret = 19;
    // int nbr;
    // int count = 0;
    // printf("J'ai choisi un nombre entre 1 et 100. Devinez-le !\n");
    // do {
    //     scanf("%d", &nbr);
    //     printf("Votre devinette : ");
    //     if (nbr > nbrSecret) {
    //         printf("Trop haut !\n");
    //     } else if (nbr < nbrSecret) {
    //         printf("Trop bas !\n");
    //     }
    //     ++count;
    // }
    // while (nbr != nbrSecret);
    // printf("Bravo ! Vous avez devine le nombre en %d essais . le nombre magiques est %d \n", count, nbrSecret);


    int num;
    printf("Entrez un nombre entre 10 et 20 : ");

    do {
        printf("Nombre invalide. Veuillez entrer un nombre entre 10 et 20 : ");
        scanf("%d", &num);
    }
    while (num < 10 || num > 20);
    printf("Nombre valide ! Merci.");

    return 0;
}
