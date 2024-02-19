#include<stdio.h>

int main(void)
{
    int num;

    num = 10;

    if(num > 0)
    {
        printf("O numero e positivo");
    }
    else if(num == 0)
    {
        printf("O numero e nulo");
    }
    else
    {
        printf("O numero e negativo");
    }
    return (0);
}