#include <stdio.h>

int main(void)
{
    int myNum; 
    int myOtherNum; 
    myNum = 15; // myNum is 15 
    myNum = 10; // Now myNum is 10
    myOtherNum = 23; //myOtherNum is 23

    myNum = myOtherNum;

    printf("myNum = %d\n", myNum);
    return(0);
}