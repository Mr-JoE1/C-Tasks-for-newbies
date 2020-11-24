/*H******************************************************
*<<<<<<<<<<<<<<<<<<< C Language Tasks >>>>>>>>>>>>>>>>>>>
*   TASK NO.    : 17
*   AUTHOR      : AlHasan Sameh
*   DATE        : May 3rd 2019
*   COMPILER    : gcc
*   DESCRIPTION :
*           Program to print the following pattern
*           *
*           **
*           ***
*           for n number of rows
*H*/



#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    printf("Enter n : ");
    scanf("%d" , &n);

    printf("\n");
    /* Nested Loop */
    for(int i = 0;i < n;i++)                                        //for n number of rows
    {
        for(int j = 0;j <= i;j++)                                   //print i number of asterisks
        {
            printf("*");
        }
        printf("\n");                                               //starting from a new line
    }

    return 0;
}
