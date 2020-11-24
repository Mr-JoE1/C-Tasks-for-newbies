/*H******************************************************
*<<<<<<<<<<<<<<<<<<< C Language Tasks >>>>>>>>>>>>>>>>>>>
*   TASK NO.    : 39
*   AUTHOR      : AlHasan Sameh
*   DATE        : May 3rd 2019
*   COMPILER    : gcc
*   DESCRIPTION :
*           Program to sum the elements in an array
*H*/



#include <stdio.h>
#include <stdlib.h>


/* Function Prototypes */
int SumArray( const int* array , int size );


int main()
{
    int n;

    printf("Enter Size Of Array : ");
    scanf("%d" , &n);

    printf("\n");

    int my_array[ n ];

    for(int i = 0;i < n;i++)
    {
        printf("Enter Element %d : " , i + 1);
        scanf("%d" , &my_array[ i ]);
    }

    printf("\n");

    printf("Sum Of Elements In The Array = %d\n" , SumArray( my_array , n ));

    return 0;
}



int SumArray( const int* array , int size )
{
    int sum = 0;
    for(int i = 0;i < size;i++)
        sum = sum + *(array + i);                   //Pointer offset notation

    return sum;
}
