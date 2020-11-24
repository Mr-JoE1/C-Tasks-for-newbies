/*H******************************************************
*<<<<<<<<<<<<<<<<<<< C Language Tasks >>>>>>>>>>>>>>>>>>>
*   TASK NO.    : 2
*   AUTHOR      : AlHasan Sameh
*   DATE        : May 3rd 2019
*   COMPILER    : gcc
*   DESCRIPTION :
*           Program to read a number from the user
*           and re-print it on the console screen
*H*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;

    printf("Enter Number : ");
    scanf("%d" , &num);                                 //%d for int

    printf("\n\nYou Have Entered :\t %d\n" , num);      //print the user input

    return 0;
}
