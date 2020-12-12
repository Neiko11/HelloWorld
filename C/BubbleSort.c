//泡沫排序
#include <stdio.h>
int main() {
    int i, j, v[5];
    for (i = 0; i < 5; i++) {
        scanf("%d", &v[i]);
    }
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5 - i; j++) {
            if (v[j] > v[j + 1]) {
                int t = v[j];
                v[j] = v[j + 1];
                v[j + 1] = t;
            }
        }
    }
    for (i = 0; i < 5; i++) {
        printf("%d", v[i]);
    }
}