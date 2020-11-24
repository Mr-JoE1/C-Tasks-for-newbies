/*H******************************************************
*<<<<<<<<<<<<<<<<<<< C Language Tasks >>>>>>>>>>>>>>>>>>>
*   TASK NO.    : 4
*   AUTHOR      : AlHasan Sameh
*   DATE        : May 3rd 2019
*   COMPILER    : gcc
*   DESCRIPTION :
*           Program to find the smallest number of
*           paper bills for a given amount of money
*H*/



#include <stdio.h>
#include <stdlib.h>

int main()
{
    int money;                                                  //Variable to store the user's money
    int twenty_bills, five_bills, one_bills;                    //Variables to count the number of bills
    int remainder;

    printf("Enter Your Money : ");                              //Prompt to enter the user's money
    scanf("%d" , &money);

    twenty_bills = money / 20;
    remainder = money % 20;                                     //Calculate remainder of money

    five_bills = remainder / 5;
    remainder = remainder % 5;                                  //Calculate remainder of money

    one_bills = remainder;

    printf("Your Money   : %d$\n"
           "20$ Bills    : %d\n"
           "5$  Bills    : %d\n"
           "1$  Bills    : %d\n" , money , twenty_bills , five_bills , one_bills);

    return 0;
}
