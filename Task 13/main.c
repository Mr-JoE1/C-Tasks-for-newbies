/*H******************************************************
*<<<<<<<<<<<<<<<<<<< C Language Tasks >>>>>>>>>>>>>>>>>>>
*   TASK NO.    : 13
*   AUTHOR      : AlHasan Sameh
*   DATE        : May 3rd 2019
*   COMPILER    : gcc
*   DESCRIPTION :
*           Program to calculate the sum of numbers 1->100
*H*/



#include <stdio.h>
#include <stdlib.h>

int main()
{
    int counter;                                    //Loop variable
    int sum = 0;                                    //Initializing in definition

    /* for loop header */
    /* Initialization ; Loop continuation condition ; Change */
    for(counter = 1;counter <= 100;counter++)
    {
        sum = sum + counter;
    }

    printf("The Sum Of Numbers From 1 To 100 = %d\n" , sum);

    return 0;
}
