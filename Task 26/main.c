/*H******************************************************
*<<<<<<<<<<<<<<<<<<< C Language Tasks >>>>>>>>>>>>>>>>>>>
*   TASK NO.    : 26
*   AUTHOR      : AlHasan Sameh
*   DATE        : May 3rd 2019
*   COMPILER    : gcc
*   DESCRIPTION :
*           Program to input a binary number and show its
*           decimal value
*H*/



#include <stdio.h>
#include <stdlib.h>


/* Function Prototypes */
int BinaryToDecimal( int binary );

int main()
{
    int binary;

    printf("Enter Number In Binary Form : ");
    scanf("%d" , &binary);

    printf("\nNumber = %d\n" , BinaryToDecimal( binary ) );

    return 0;
}

/* Function to convert a binary number to decimal
*  expects an integer consisting only of 0's and 1's
*  returns decimal equivalent to input number
*/
int BinaryToDecimal( int binary )
{
    int PowerOfTwo = 1;
    int decimal = 0;

    while(binary != 0)
    {
        decimal += (binary % 10) * PowerOfTwo;                  //Extract the rightmost digit
        binary /= 10;
        PowerOfTwo = PowerOfTwo << 1;                           //Multiply by 2
    }
    return decimal;
}
