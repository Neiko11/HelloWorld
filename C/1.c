#include <stdio.h>
int main() {
    int var[5] = {0};
    printf("请依次输入5个数：");
    for (int i = 1; i <= 5; i++) {
        scanf("%d", &var[i - 1]);
        printf("%d:%d\n", i, var[i - 1]);
    }
    int n;
    scanf("%d", &n);
    printf("Q: %d", var[n - 1]);
    return 0;
}