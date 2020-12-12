//求10个数里最大值与平均值
#include <stdio.h>
int max_10(int v[10]);
int avg_10(int v[10]);
int main() {
    int v[10];
    for (int i = 1; i <= 10; i++) {
        scanf("%d", &v[i - 1]);
    }
    printf("%d\n", max_10(v));
    printf("%d", avg_10(v));
}
int max_10(int v[10]) {
    int max = v[0];
    for (int i = 1; i < 10; i++) {
        if (v[i] >= max) {
            max = v[i];
        }
    }
    return max;
}
int avg_10(int v[10]) {
    int sum = v[0];
    int avg;
    for (int i = 1; i < 10; i++) {
        sum += v[i];
    }
    avg = sum / 10;
    return avg;
}