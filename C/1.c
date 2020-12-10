#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(0));
    int counter[11] = {0};
    int n;
    int i;
    
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        int dice1 = rand() % 6 + 1;
        int dice2 = rand() % 6 + 1;
        int sum = dice1 + dice2;
        counter[sum - 2]++;
    }
    for (i = 2; i <= 12; i++)
    {
        printf("%d: %d\n", i, counter[i - 2]);
    }
    return 0;
}