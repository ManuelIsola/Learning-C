#include <stdio.h>

int main(void)
{
    int myNum;
    float myNum1;
    double myNum2;

    myNum = 10;
    myNum1 = 1.75;
    myNum2 = 2.500;
    
    printf("%i\n", myNum);
    printf("%.2f\n", myNum1);
    printf("%.3lf", myNum2);

    return (0);
}