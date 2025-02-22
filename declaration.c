#include <stdio.h>
#include <stdint.h>

typedef int32_t int32;


int main(void) {
    // un octet pour un charactère non signé
    unsigned char byte = 255;


    // int32 pour un entier signé 32 bits
    int32 number = -123456;

    //    example : age de la personne, température, salaire, première lettere du nom et nombre d'étudiants
    int age = 25;
    float temperature = 22.5;
    float salary = 3500.75;
    char firstLetter = 'A';
    unsigned int nbStudents = 30;

    printf("Byte : %u\n", byte);
    printf("32-bit integer : %d\n", number);
}
