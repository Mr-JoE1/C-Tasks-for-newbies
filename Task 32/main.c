/*H******************************************************
*<<<<<<<<<<<<<<<<<<< C Language Tasks >>>>>>>>>>>>>>>>>>>
*   TASK NO.    : 32
*   AUTHOR      : AlHasan Sameh
*   DATE        : May 3rd 2019
*   COMPILER    : gcc
*   DESCRIPTION :
*           Program to read a string using character arrays
*H*/



#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    char string1[ 20 ];

    printf("Enter A Short String : ");
    scanf("%19[^\n]s" , string1);                               //Array name is the address of its first element

    printf("\n\n");

    printf("String : %s\n\n" , string1);
    printf("String Separated By Spaces : ");

    int length = strlen( string1 );
    for(int i = 0;i < length;i++)
        printf("%c " , string1[ i ]);

    printf("\n");

    return 0;
}
