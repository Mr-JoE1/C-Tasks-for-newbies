/*H******************************************************
*<<<<<<<<<<<<<<<<<<< C Language Tasks >>>>>>>>>>>>>>>>>>>
*   TASK NO.    : 24
*   AUTHOR      : AlHasan Sameh
*   DATE        : May 3rd 2019
*   COMPILER    : gcc
*   DESCRIPTION :
*           Program to find the greatest common divisor of 2 numbers
*H*/



#include <stdio.h>
#include <stdlib.h>
#include <math.h>


/* Function Prototypes */
int findGCD( int num1 , int num2 );


int main()
{
    int num1, num2;

    printf("Enter Number 1 (Non-Zero) : ");
    scanf("%d" , &num1 );

    printf("\n");

    printf("Enter Number 2 (Non-Zero) : ");
    scanf("%d" , &num2 );

    printf("\n");

    printf("GCD Of %d And %d = %d\n" , num1 , num2 , findGCD( num1 , num2 ) );

    return 0;
}

int findGCD( int num1 , int num2 )
{
    int greater_num;
    int smaller_num;
    int remainder;

    /* Drop any -ve signs */
    num1 = abs( num1 );
    num2 = abs( num2 );

    /* Determine greatest and smallest numbers */
    if(num1 > num2)
    {
        greater_num = num1;
        smaller_num = num2;
    }
    else if(num1 < num2)
    {
        greater_num = num2;
        smaller_num = num1;
    }
    else                                        //Numbers are equal
        return num1;                            //Return the same number immediately


    /* Eucledian Algorithm */
    do
    {
        remainder = greater_num % smaller_num;
        greater_num = smaller_num;
        smaller_num = remainder;

    }while(remainder != 0);

    return greater_num;
}
