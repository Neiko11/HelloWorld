#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    int i, n, counter[100] = {0};
    for (i = 1; i <= 100; i++) {
        do {
            n = rand() % 100 + 1;

        } while (counter[n - 1] != 0);
        printf("%d ", n);
        counter[n - 1]++;
    }
    return 0;
}