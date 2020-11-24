/*H******************************************************
*<<<<<<<<<<<<<<<<<<< C Language Tasks >>>>>>>>>>>>>>>>>>>
*   TASK NO.    : 21
*   AUTHOR      : AlHasan Sameh
*   DATE        : May 3rd 2019
*   COMPILER    : gcc
*   DESCRIPTION :
*           Program to show the simple structure of functions
*H*/



#include <stdio.h>
#include <stdlib.h>


/* Function That Receives Two Integers And Returns Their Sum */
int sum( int num1 , int num2 )                                  //Function header
{
    int result;
    result = num1 + num2;                                       //Calculate sum

    return result;                                              //Return result...execution terminates
}



int main()
{
    int num1, num2;

    printf("Enter First Number : ");
    scanf("%d" , &num1);

    printf("Enter Seconds Number : ");
    scanf("%d" , &num2);

    printf("\n");

    printf("Sum = %d\n" , sum( num1 , num2 ));                  //Call function sum and pass the two numbers
    return 0;
}
