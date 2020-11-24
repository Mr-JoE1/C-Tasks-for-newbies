/*H******************************************************
*<<<<<<<<<<<<<<<<<<< C Language Tasks >>>>>>>>>>>>>>>>>>>
*   TASK NO.    : 16
*   AUTHOR      : AlHasan Sameh
*   DATE        : May 3rd 2019
*   COMPILER    : gcc
*   DESCRIPTION :
*           Program to count 7's in a given number
*H*/



#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int num;
    int count_sevens = 0;
    int units;

    printf("Enter A Number : ");
    scanf("%d" , &num);

    while(num != 0)
    {
        units = abs(num % 10);                                          //Extract the rightmost digit...handle -ve numbers
        if(units == 7)                                                  //If current digit equals 7
            count_sevens++;                                             //Increment the counter

        num /= 10;                                                      //Remove the rightmost digit
    }

    printf("\nNumber Of Sevens = %d\n" , count_sevens);

    return 0;
}
