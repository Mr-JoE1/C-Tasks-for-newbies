/*H******************************************************
*<<<<<<<<<<<<<<<<<<< C Language Tasks >>>>>>>>>>>>>>>>>>>
*   TASK NO.    : 28
*   AUTHOR      : AlHasan Sameh
*   DATE        : May 3rd 2019
*   COMPILER    : gcc
*   DESCRIPTION :
*           Program to define, initialize and print an
*           array of 10 elements
*H*/



#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

int main()
{
    int array[ SIZE ];                                  //Array Definition

    /* Loop to initialize array */
    for(int i = 0;i < SIZE;i++)
        array[ i ] = i + 1;

    printf("Printing The Array : \n\n");
    printf("Index :          Value : \n");

    /* Loop to print the array */
    for(int i = 0;i < SIZE;i++)
        printf("%8d%18d\n" , i , array[ i ]);

    printf("\n");

    return 0;
}
