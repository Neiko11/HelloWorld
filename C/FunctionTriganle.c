#include <stdio.h>
void print_triangle(int i);
void print_stars(int N);
int main()
{
   int N;
   scanf("%d", &N);
   print_triangle(N);
   return 0;
}
void print_triangle(int N) //打印行
{
   for (int i = 1; i <= N; i++)
   {
      print_stars(i);
      printf("\n");
   }
}
void print_stars(int i)    //打印五角星
{
   for (int j = 1; j <= i; j++)
   {
      printf("*");
   }
}