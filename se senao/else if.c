#include<stdio.h>

int main(void)
{
    int time;

    time = 22;

    if(time < 12)
    {
        printf("Bom dia!");
    }
    else if (time >= 12 && time <=17)
    {
        printf("Boa tarde!");
    }
    else
    {
        printf("Boa noite!");
    }

    return (0);
}