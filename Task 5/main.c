/*H******************************************************
*<<<<<<<<<<<<<<<<<<< C Language Tasks >>>>>>>>>>>>>>>>>>>
*   TASK NO.    : 5
*   AUTHOR      : AlHasan Sameh
*   DATE        : May 3rd 2019
*   COMPILER    : gcc
*   DESCRIPTION :
*           Program to determine if an input number
*           is even or odd
*H*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;

    printf("Enter Your Number : ");
    scanf("%d" , &num);

    printf("\n");

    if(num % 2 == 0)                                        //Number is divisible by 2
        printf("%d is even\n" , num);
    else                                                    //Number is not divisible by 2
        printf("%d is odd\n" , num);

    return 0;
}
