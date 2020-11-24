/*H******************************************************
*<<<<<<<<<<<<<<<<<<< C Language Tasks >>>>>>>>>>>>>>>>>>>
*   TASK NO.    : 19
*   AUTHOR      : AlHasan Sameh
*   DATE        : May 3rd 2019
*   COMPILER    : gcc
*   DESCRIPTION :
*           Program to print the following pattern
*                       ***
*                        **
*                         * for n number of rows
*H*/



#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    printf("Enter n : ");
    scanf("%d" , &n);

    printf("\n");

    for(int i = 0;i < n;i++)                                    //for n rows
    {
        for(int j = 0;j < i;j++)                                //Print i spaces
        {
            printf(" ");
        }

        for(int k = 0;k < n - i;k++)                            //Print n - i asterisks
        {
            printf("*");
        }

        printf("\n");                                           //Start from a new line
    }

    printf("\n");


    return 0;
}
