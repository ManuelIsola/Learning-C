#include<stdio.h>

int main(void)
{
    float convertido, valorMetros;

    valorMetros = 30.10;
    convertido = (float)(valorMetros * 10);
    printf("%.2f metros e igual a %.2f decimetros", valorMetros, convertido);
    return (0);
}