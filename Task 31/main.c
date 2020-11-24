/*H******************************************************
*<<<<<<<<<<<<<<<<<<< C Language Tasks >>>>>>>>>>>>>>>>>>>
*   TASK NO.    : 31
*   AUTHOR      : AlHasan Sameh
*   DATE        : May 3rd 2019
*   COMPILER    : gcc
*   DESCRIPTION :
*           Program to find the second largest element
*           of an array
*H*/



#include <stdio.h>
#include <stdlib.h>
#include <limits.h>


/* Function Prototypes */
void Bubble_Sort( int arr[] , int size );

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

    Bubble_Sort( my_array , n );                                                    //Sort the array in ascending order

    printf("The Second Largest Element Of The Array : %d\n" , my_array[ n - 2 ]);

    return 0;
}
/*
    Function to sort an array in ascending order
        Input : array of integers to be sorted - number of elements of the array
        Soring Algorithm : Bubble Sort
*/
void Bubble_Sort( int arr[] , int size )
{
    int hold;

    for(int i = 0;i < size - 1;i++)
    {
        for(int j = 1;j < size;j++)
        {
            if(arr[ j - 1 ] > arr[ j ])             //Compare adjacent elements
            {
                /* Swapping 2 values */
                hold = arr[ j ];
                arr[ j ] = arr[ j - 1 ];
                arr[ j - 1 ] = hold;
            }
        }
    }
}
