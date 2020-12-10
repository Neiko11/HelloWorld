#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int counter[6] = {0};
    int n;
    scanf("%d", &n);
    srand(time(0));
    for (int i = 1; i <= n; i++)
    {
        int dice = rand() % 6 + 1;
        counter[dice - 1]++;
    }
    for (int j = 1; j <= 6; j++)
    {
        printf("%d : %d\n", j, counter[j - 1]);
    }
    return 0;
}
