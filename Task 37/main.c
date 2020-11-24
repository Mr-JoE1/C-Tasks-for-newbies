/*H******************************************************
*<<<<<<<<<<<<<<<<<<< C Language Tasks >>>>>>>>>>>>>>>>>>>
*   TASK NO.    : 37
*   AUTHOR      : AlHasan Sameh
*   DATE        : May 3rd 2019
*   COMPILER    : gcc
*   DESCRIPTION :
*           Program to demonstrate the use of pointers
*H*/



#include <stdio.h>
#include <stdlib.h>


int main()
{
    int my_int;
    int* int_ptr = &my_int;                                 //Pointer Definition AND Initialization

    printf("Enter A Number To Store In my_int : ");
    scanf("%d" , int_ptr);                                  //Passing the pointer to scanf

    printf("\n");

    printf("Address Using The & Operator : %p\n"
           "Address Using The Pointer    : %p\n"
           "The Value You Entered        : %d\n" , &my_int , int_ptr , *int_ptr);

    return 0;
}
