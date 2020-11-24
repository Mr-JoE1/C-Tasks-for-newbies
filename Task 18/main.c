/*H******************************************************
*<<<<<<<<<<<<<<<<<<< C Language Tasks >>>>>>>>>>>>>>>>>>>
*   TASK NO.    : 18
*   AUTHOR      : AlHasan Sameh
*   DATE        : May 3rd 2019
*   COMPILER    : gcc
*   DESCRIPTION :
*           Program to continue printing the multiples
*           of the number 2 infinitely
*H*/



#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int multiple = 2;

    /* Infinite Loop */
    while(1)                                                //while(true)
    {
        printf("%u\n" , multiple);
        multiple = multiple * 2;
        getchar();                                          //Pause the loop...continue by pressing enter
    }

    return 0;
}
