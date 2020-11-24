/*H******************************************************
*<<<<<<<<<<<<<<<<<<< C Language Tasks >>>>>>>>>>>>>>>>>>>
*   TASK NO.    : 3
*   AUTHOR      : AlHasan Sameh
*   DATE        : May 3rd 2019
*   COMPILER    : gcc
*   DESCRIPTION :
*           Program to calculate the sum and difference
*           of two numbers
*H*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2;
    int sum, difference;

    printf("Enter The First Number : ");        //Prompt for the user
    scanf("%d" , &num1);                        //Store the user input in num1

    printf("Enter The Seconds Number : ");      //Prompt for the user
    scanf("%d" , &num2);                        //Store the user input in num2

    sum = num1 + num2;
    difference = num1 - num2;

    printf("\n");

    printf("Sum = %d\n"
           "Difference = %d\n" , sum , difference);     //Print Results


    return 0;
}
