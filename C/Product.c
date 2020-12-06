//乘法口诀表
#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int i, j, product;
    for (i = 9; i >= 1; i--)    //定义9行
    {
        for (j = 9; j >= (10 - i); j--)    //定义每行几列
        {
            product = i * j;
            printf("%d*%d=%d ", i, j, product);
        }
        printf("\n");
    }
    system("pause");
    return 0;
}