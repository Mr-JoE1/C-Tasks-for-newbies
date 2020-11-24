/*H******************************************************
*<<<<<<<<<<<<<<<<<<< C Language Tasks >>>>>>>>>>>>>>>>>>>
*   TASK NO.    : 11
*   AUTHOR      : AlHasan Sameh
*   DATE        : May 3rd 2019
*   COMPILER    : gcc
*   DESCRIPTION :
*           Program to calculate the average of 10 grades
*H*/



#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int grade;
    unsigned int total;
    int counter;                        //Loop Counter

    float average;

    total = 0;                          //Initializing total variable
    counter = 0;                        //Initializing loop counter
    while(counter < 10)                 //Loop continuation condition
    {
        printf("Enter A Grade : ");
        scanf("%u" , &grade);

        total = total + grade;          //Accumulate input grades

        counter++;                      //Increment loop counter
    }

    average = (float)total / 10;        //Cast the result to float

    printf("\nAverage = %f\n" , average);

    return 0;
}
