#include <stdio.h>


int main() {
    int jour;
    // printf("Saisir le numéro du jour dans une semaine (1-7) ");
     //scanf("%d", &jour);

    switch (jour) {
    case 1:
        printf("Lundi");
        break;
    case 2:
        printf("Mardi");
        break;
    case 3:
        printf("Mecredi");
        break;
    case 4:
        printf("Jeudi");
        break;
    case 5:
        printf("Vendredi");
        break;
    case 6:
        printf("Samedi");
        break;
    case 7:
        printf("Dimanche");
        break;
    default:
        //     printf("Entree invalide! Veuillez saisir un chiffre entre 1 et 7.");
    }

    char op;
    float nb1, nb2, result;
    printf("Saisir les deux numeros: ");
    scanf("%f %f", &nb1, &nb2);
    printf("Saisir le opérations +, -, * , /");
    scanf(" %c", &op);

    switch (op) {
    case '+':
        result = nb1 + nb2;
        break;
    case '-':
        result = nb1 - nb2;
        break;

    case '*':
        result = nb1 * nb2;
        break;

    case '/':
        if (nb2 != 0) {
            result = nb1 / nb2;
            break;
        } else {
            printf("Erreur de  division par zero!");
        }


    default:
        printf("Vous avez entre un operator non valide.");
        break;


    }
    printf("%.2f %c %.2f = %.2f", nb1, op, nb2, result);


    return 0;
}
