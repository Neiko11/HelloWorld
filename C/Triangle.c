#include <stdio.h>
#include <stdlib.h>
int main() {
    int i, j, height;
    printf("几个高: ");
    scanf("%d", &height);
    if (height == 0 || height == 1) {
        printf("至少2格哦!\n");
    } else {
        for (int i = 1; i <= height; i++) {
            for (int j = 1; j <= height - i; j++) {
                printf(" ");
            }
            for (int j = 1; j <= 2 * i - 1; j++) {
                printf("*");
            }
            printf("\n");
        }
    }
    system("pause");
    return 0;
}