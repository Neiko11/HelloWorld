#include <stdio.h>
int main()
{
    int prices[5] = {90, 75, 83, 89, 71};
    int id;
    int sum = 0;
    do
    {
        scanf("%d", &id);
        if (id == 0)
        {
            break;
        }
        sum = sum + prices[id - 1];
    } while (id != 0);
    printf("%d", sum);
    return sum;
    
}