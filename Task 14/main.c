/*H******************************************************
*<<<<<<<<<<<<<<<<<<< C Language Tasks >>>>>>>>>>>>>>>>>>>
*   TASK NO.    : 14
*   AUTHOR      : AlHasan Sameh
*   DATE        : May 3rd 2019
*   COMPILER    : gcc
*   DESCRIPTION :
*           Program to read 10 numbers and calculate
*           their sum and average
*H*/



#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;                                    //Variable to store user input
    int sum = 0;                                //Sum variable

    for(int i = 0;i < 10;i++)                   //Loop executes 10 times
    {
        printf("Enter Number %d : " , i + 1);   //Prompt for the user
        scanf("%d" , &num);                     //Store user's input

        sum += num;                             //Accumulate numbers
    }

    printf("\n");

    printf("Sum = %d\n"
           "Average = %f\n" , sum , (float)sum / 10);

    return 0;
}
