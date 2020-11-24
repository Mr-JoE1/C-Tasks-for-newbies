/*H******************************************************
*<<<<<<<<<<<<<<<<<<< C Language Tasks >>>>>>>>>>>>>>>>>>>
*   TASK NO.    : 30
*   AUTHOR      : AlHasan Sameh
*   DATE        : May 3rd 2019
*   COMPILER    : gcc
*   DESCRIPTION :
*           Program to find the largest element of an array
*H*/



#include <stdio.h>
#include <stdlib.h>
#include <limits.h>


int main()
{
    int n;

    printf("Enter Number Of Elements : ");
    scanf("%d" , &n);

    int my_array[ n ];

    printf("\n");

    for(int i = 0;i < n;i++)
    {
        printf("Enter Element %d : " , i + 1);
        scanf("%d" , &my_array[ i ]);
    }

    printf("\n");

    int max = INT_MIN;                              //Smallest value an int can store
    int index;

    for(int i = 0;i < n;i++)
    {
        if(my_array[ i ] > max)
        {
            max = my_array[ i ];
            index = i;
        }
    }

    printf("The Largest Element Is : %d\n"
           "Its Index : %d\n" , max , index );

    return 0;
}
