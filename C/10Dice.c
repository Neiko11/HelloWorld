//掷10个不一样的骰子
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
int main(){
    int i, j, flag, v[10];
    for (i = 1; i <= 10; i++){
        srand(time(0));
        do{
            v[i - 1] = rand() % 10 + 1;
            flag = 0;
            for (j = 1; j < i; j++){
                if (v[i - 1] == v[j - 1]){
                    flag = 1;
                    break;
                }
            }
        }while (flag == 1);
        printf("%d ", v[i - 1]);
    }
}