#include <stdio.h>

int main(void)
{
    int myNum;
    float myFloatNum;
    char myLetter;

    myNum = 30;
    myFloatNum = 1.75;
    myLetter = 'M';

    printf("%d\n", myNum);
    printf("%.2f\n", myFloatNum);
    printf("%c\n", myLetter);
    return(0);
}