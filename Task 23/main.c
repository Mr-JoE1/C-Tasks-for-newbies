/*H******************************************************
*<<<<<<<<<<<<<<<<<<< C Language Tasks >>>>>>>>>>>>>>>>>>>
*   TASK NO.    : 23
*   AUTHOR      : AlHasan Sameh
*   DATE        : May 3rd 2019
*   COMPILER    : gcc
*   DESCRIPTION :
*           Program to read a number and reverse it
*H*/



#include <stdio.h>
#include <stdlib.h>


/* Function Prototypes */
int ReverseNum( int num );

int main()
{
    int num;

    printf("Enter A Number : ");
    scanf("%d" , &num );


    num = ReverseNum( num );

    printf("\nReversed Number = %d\n\n" , num );

    return 0;
}

int ReverseNum( int num )
{
    int reverted_num = 0;
    while(num)                                          //num != 0
    {
        reverted_num = reverted_num * 10 + num % 10;    //Extract the rightmost digit in num as the leftmost digit in reverted_num
        num /= 10;                                      //Get to the next digit in num
    }
    return reverted_num;                                //return reverted number
}
