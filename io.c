#include <stdio.h>
#include <string.h>


int main() {

    char nom[50];
    int age;

    printf("Veuillez entrer votre nom : ");
    //scanf("%s", nom);

    printf("Veuillez entrer votre age : ");
    //scanf("%d", &age);

    printf("Bienvenue, %s votre age %d.\n", nom, age);

    int num1, num2;
    printf("Veuillez entrer number1 : ");
    //scanf("%d", &num1);
    printf("Veuillez entrer number2 : ");
    //scanf("%d", &num2);

    int result = num1 + num2;

    printf("Merci, %d + %d = %d", num1, num2, result);

    char word[50];
    int longeur;
    printf("entrez un mot : ");
    //scanf("%s", word);
    longeur = strlen(word);

    printf("Longeur du mot %d\n", longeur);

    float price, res;
    int pieces;
    printf("entrez price de product : ");
    scanf("%f", &price);
    printf("vous voulez combien pieces : ");
    scanf("%d", &pieces);

    res = price * pieces;

    printf("%.2f * %d = %.2f vous devrez payer ", price, pieces, res);

    return 0;
}
