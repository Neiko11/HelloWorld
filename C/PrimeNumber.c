#include <stdio.h>
int main()
{
    int i, j, num;
    int flag = 1;                   //当值为1时则是质数，为0时则不是质数
    scanf("%d", &num);
    for (i = 2; i <= num; i++)      //定义取值范围
    {
        for (j = 2; j < i; j++)     //判断范围里的数是否为质数
        {
            if (i % j == 0)         //若被非自身的数整除了，则非质数
            {
                flag = 0;
                break;
            }

        }
        if (flag != 0)
        {
            printf("%d ", i);
        }
        flag = 1;
    }
}