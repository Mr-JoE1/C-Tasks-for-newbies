/*H******************************************************
*<<<<<<<<<<<<<<<<<<< C Language Tasks >>>>>>>>>>>>>>>>>>>
*   TASK NO.    : 6
*   AUTHOR      : AlHasan Sameh
*   DATE        : May 3rd 2019
*   COMPILER    : gcc
*   DESCRIPTION :
*           Program to read a person's height and find
*           if he/she is a dwarf or not
*H*/



#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int height;

    printf("Enter Your Height In Centimeters : ");
    scanf("%u" , &height);

    printf("\n");

    if(height <= 140)
        printf("You Are A Dwarf!!\n");
    else
        printf("You Are Not A Dwarf\n");

    return 0;
}
