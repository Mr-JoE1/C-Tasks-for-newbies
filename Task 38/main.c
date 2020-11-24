/*H******************************************************
*<<<<<<<<<<<<<<<<<<< C Language Tasks >>>>>>>>>>>>>>>>>>>
*   TASK NO.    : 38
*   AUTHOR      : AlHasan Sameh
*   DATE        : May 3rd 2019
*   COMPILER    : gcc
*   DESCRIPTION :
*           Program to swap 2 numbers
*H*/



#include <stdio.h>
#include <stdlib.h>


/* Function Prototypes */
void Swap( int* xPtr , int* yPtr );


int main()
{
    int num1, num2;

    printf("Enter The First Number : ");
    scanf("%d" , &num1);

    printf("\n");

    printf("Enter The Second Number : ");
    scanf("%d" ,  &num2);

    printf("\n");

    printf("Before Using Swap : \n"
           "Number1 = %d   Number2 = %d\n" , num1 , num2);

    Swap( &num1 , &num2 );

    printf("\n");

    printf("After Using Swap : \n"
           "Number1 = %d   Number2 = %d\n" , num1 , num2);

    return 0;
}


void Swap( int* xPtr , int* yPtr )
{
    int hold = *xPtr;
    *xPtr = *yPtr;
    *yPtr = hold;
}
