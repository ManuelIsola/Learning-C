#include <stdio.h>

int main(void)
{
    const   int anoNascimento = 2001;
    int anoActual;
    int idade;

    anoActual = 2024;
    idade = (anoActual - anoNascimento);
    printf("Eu tenho %d anos de idade", idade);
    return (0);
}