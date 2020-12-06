//实心三角形
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, j, height;
    printf("请问需要几格高的三角形： ");
    scanf("%d", &height);
    if (height == 0 || height == 1)    //限制最少2格
    {
        printf("至少2格哦!\n");
    }
    else
    {
        for (int i = 1; i <= height; i++)
        {
            for (int j = 1; j <= height - i; j++)    //定义每行几个空格
            {
                printf(" ");
            }
            for (int j = 1; j <= 2 * i - 1; j++)    //定义每行几个*
            {
                printf("*");
            }
            printf("\n");
        }
    }
    system("pause");
    return 0;
}