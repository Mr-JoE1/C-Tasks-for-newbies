/*H******************************************************
*<<<<<<<<<<<<<<<<<<< C Language Tasks >>>>>>>>>>>>>>>>>>>
*   TASK NO.    : 29
*   AUTHOR      : AlHasan Sameh
*   DATE        : May 3rd 2019
*   COMPILER    : gcc
*   DESCRIPTION :
*           Program to read n values and print them
*           in reverse order
*H*/



#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    printf("Enter The Number Of Values : ");
    scanf("%d" , &n);

    int values[ n ];

    for(int i = 0;i < n;i++)
    {
        printf("Enter Element %d : " , i + 1);
        scanf("%d" , &values[ i ]);
    }

    printf("\n");
    printf("Input Values In Reverse Order : \n");

    /* Loop from last to first elements of the array */
    for(int i = n - 1;i > -1;i--)
    {
        printf("%d\n" , values[ i ]);
    }

    printf("\n");

    return 0;
}
