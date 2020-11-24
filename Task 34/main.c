/*H******************************************************
*<<<<<<<<<<<<<<<<<<< C Language Tasks >>>>>>>>>>>>>>>>>>>
*   TASK NO.    : 34
*   AUTHOR      : AlHasan Sameh
*   DATE        : May 3rd 2019
*   COMPILER    : gcc
*   DESCRIPTION :
*           Program to read a sentence and replace lowercase
*           letters with uppercase and vice versa
*H*/



#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    char string[ 100 ];

    printf("Enter Your Sentence : ");
    scanf("%99[^\n]s" , string);

    printf("\n");
    int str_length = strlen( string );

    for(int i = 0;i < str_length;i++)
    {
        if(isupper( string[ i ] ))
            string[ i ] = tolower( string[ i ] );
        else
            string[ i ] = toupper( string[ i ] );
    }

    printf("After Modification : %s\n" , string);

    return 0;
}
