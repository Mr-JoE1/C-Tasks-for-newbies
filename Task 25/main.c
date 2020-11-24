/*H******************************************************
*<<<<<<<<<<<<<<<<<<< C Language Tasks >>>>>>>>>>>>>>>>>>>
*   TASK NO.    : 25
*   AUTHOR      : AlHasan Sameh
*   DATE        : May 3rd 2019
*   COMPILER    : gcc
*   DESCRIPTION :
*           Program to input a decimal number and show
*           its binary representation
*H*/



#include <stdio.h>
#include <stdlib.h>


/* Function Prototypes */
void PrintBinary( int num );

int main()
{
    int num;

    printf("Enter Number : ");
    scanf("%d" , &num );

    PrintBinary( num );

    return 0;
}

void PrintBinary( int num )
{
    printf("\n");

    printf("In Decimal : %d\n" , num );
    printf("In Binary : \n");
    printf("\t");

    /* Loop on individual bits of the number
       Bitwise magic....go check it out
    */
    for(unsigned int i = 1 << 31;i > 0;i >>= 1)
    {
        if(num & i)                                         //Masking irrelevant bits...printing the current bit
            printf("1");
        else
            printf("0");
    }

    printf("\n");
}
