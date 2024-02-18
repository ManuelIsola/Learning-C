#include <stdio.h>

int main(void)
{
    int n1;
    int n2;
    float result;

    n1 = 2;
    n2 = 5;

    result = ((float) n2 / n1);

    printf("%.1f\n", result);

    return(0);
}