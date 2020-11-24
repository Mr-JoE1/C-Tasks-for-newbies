/*H******************************************************
*<<<<<<<<<<<<<<<<<<< C Language Tasks >>>>>>>>>>>>>>>>>>>
*   TASK NO.    : 27
*   AUTHOR      : AlHasan Sameh
*   DATE        : May 3rd 2019
*   COMPILER    : gcc
*   DESCRIPTION :
*           Program to check whether a number is palindrome or not
*H*/



#include <stdio.h>
#include <stdlib.h>


/* Function Prototypes */

int IsPalindrome( int num );
int ReverseNum( int num );

int main()
{
    int num;

    printf("Enter A Number : ");
    scanf("%d" , &num);

    if(IsPalindrome( num ))
        printf("\n%d Is Palindrome!!\n" , num );
    else
        printf("\n%d Is Not Palindrome!!\n" , num );

    return 0;
}

int IsPalindrome( int num )
{
    int reversed_num = ReverseNum( num );
    return reversed_num == num;
}

int ReverseNum( int num )
{
    int reversed_num = 0;

    while(num != 0)
    {
        reversed_num = reversed_num * 10 + num % 10;
        num /= 10;
    }
    return reversed_num;
}
