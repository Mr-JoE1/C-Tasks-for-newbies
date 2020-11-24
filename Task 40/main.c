/*H******************************************************
*<<<<<<<<<<<<<<<<<<< C Language Tasks >>>>>>>>>>>>>>>>>>>
*   TASK NO.    : 40
*   AUTHOR      : AlHasan Sameh
*   DATE        : May 3rd 2019
*   COMPILER    : gcc
*   DESCRIPTION :
*           Program to print a string in reverse order
*H*/



#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/* Function Prototypes */
void PrintInReverse( const char* str );


int main()
{
    char my_string[ 100 ];

    printf("Enter A String : ");
    scanf("%99[^\n]s" , my_string);

    PrintInReverse( my_string );

    return 0;
}


void PrintInReverse( const char* str )
{
    printf("\n");
    printf("String In Reverse Order : ");

    int length = strlen( str );

    for(int i = length - 1;i > -1;i--)
        printf("%c" , *(str + i));

    printf("\n");

    return;
}
