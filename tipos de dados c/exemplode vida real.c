#include <stdio.h>

int main(void)
{
    int item;
    float custo, total;

    item = 50;
    custo = 100.99;
    total = item * custo;
    printf("O custo total e de %.2f", total);
    return (0);
}