#include<stdio.h>
#include<stdbool.h>

int main(void)
{
    int x, y;
    bool result;

    x = 20;
    y = 18;

    result = x > y;

    if(result)
    {
        printf("Ola Mundo");
    }

    return (0);
}