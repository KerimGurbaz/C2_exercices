#include <stdio.h>

int main() {
    for (int i = 0; i <= 5; i += 2) {
        printf("%d ", i);
    }
    printf("\n");

    for (int i = 1; i != 16; i *= 2) {
        printf("%d ", i);
    }
    printf("\n");

    char c = '*';


    for (int i = 1; i <= 10; ++i) {
        int result = 5 * i;
        printf("5 %c %d = %d\n", c, i, result);
    }
    printf("\n");

    for (int i = 1; i <= 10; ++i) {
        int res = 7 * i;
        if (res % 2) {
            printf("7 %c %d = %d \n", c, i, res);
        }

    }

    printf("\n");

    for (int i = 1; i <= 4; ++i) {
        if (i == 2) {
            for (int j = 1; j <= 10; ++j) {
                printf("%d %c %d = %d \n", i, c, j, i * j);
            }
            printf("\n");
        } else if (i == 3) {
            for (int j = 1; j <= 10; ++j) {
                printf("%d %c %d = %d \n", i, c, j, i * j);
            }
            printf("\n");
        } else if (i == 4) {
            for (int j = 1; j <= 10; ++j) {
                printf("%d %c %d = %d \n", i, c, j, i * j);
            }
        }

    }

    for (int i = 2; i <= 4; ++i) {
        for (int j = 1; j <= 10; ++j) {
            printf("%d * %d = %d \n", i, j, i * j);
        }
        printf("\n");
    }

    int num;

    printf("Lutfen positif bir tam sayi giriniz : ");
    scanf("%d", &num);

    for (int i = 1; i <= 10; ++i) {
        printf("%d * %d = %d\n", i, num, i * num);
    }



}
