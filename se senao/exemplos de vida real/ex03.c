#include<stdio.h>

int main(void)
{
    int num, x;

    num = 5;
    x = num % 2;
    (x == 0) ? printf("O numero e par") : printf("O numero e impar");
    return 0;
}