#include <stdio.h>
int main(){
    int i, n, v[10]={0};
    for (i = 1; i <= 10; i++){
        scanf("%d", &n);
        v[(n - 1) / 10]++;
    }
    for (i = 1; i <= 10; i++){
        printf("%3d: ", i * 10);
        for (int j = 1; j <= v[i - 1]; j++){
            printf("*");
        }
        printf("\n");
    }
}