/*H******************************************************
*<<<<<<<<<<<<<<<<<<< C Language Tasks >>>>>>>>>>>>>>>>>>>
*   TASK NO.    : 15
*   AUTHOR      : AlHasan Sameh
*   DATE        : May 3rd 2019
*   COMPILER    : gcc
*   DESCRIPTION :
*           Program to calculate the factorial of a
*           given number
*H*/



#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long Fact;                                         //Variable To Store Factorial
    int num;

    printf("Enter A Positive Number : ");
    scanf("%d" , &num);

    /* Check for -ve user input */
    while(num < 0)
    {
        printf("Wrong Input!!\n\n");

        printf("Enter A Positive Number : ");
        scanf("%d" , &num);
    }
    /* Loop terminates...num contains a +ve value */

    Fact = 1;                                               //Initialize factorial variable
    for(int counter = 1;counter <= num;counter++)
        Fact = Fact * counter;

    printf("\n");

    printf("Factorial Of %d = %d\n" , num , Fact);

    return 0;
}
