#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    int i, j, v[10];
    for (i = 1; i <= 10; i++) {
        v[i - 1] = i;
    }
    for (i = 1; i <= 10; i++) {
        srand(time(0));
        int j = rand() % (11 - i) + i;
        int t;
        t = v[i - 1];
        v[i - 1] = v[j - 1];
        v[j - 1] = t;
        printf("%d ", v[i - 1]);
    }
}