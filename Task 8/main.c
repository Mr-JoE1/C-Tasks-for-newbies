/*H******************************************************
*<<<<<<<<<<<<<<<<<<< C Language Tasks >>>>>>>>>>>>>>>>>>>
*   TASK NO.    : 8
*   AUTHOR      : AlHasan Sameh
*   DATE        : May 3rd 2019
*   COMPILER    : gcc
*   DESCRIPTION :
*           Program to tell a student if he passed or
*           failed based on his grade
*H*/



#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int grade;

    printf("Enter Your Grade : ");
    scanf("%u" , &grade);

    printf("\n");
    /* Conditional Operator ? : Determines If User Has Passed Or Failed */
    printf("You Have %s\n" , grade >= 50 ? "Passed" : "Failed");

    return 0;
}
