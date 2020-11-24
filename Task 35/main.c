/*H******************************************************
*<<<<<<<<<<<<<<<<<<< C Language Tasks >>>>>>>>>>>>>>>>>>>
*   TASK NO.    : 35
*   AUTHOR      : AlHasan Sameh
*   DATE        : May 3rd 2019
*   COMPILER    : gcc
*   DESCRIPTION :
*           Program to compare 2 strings without using
*           the library function
*H*/



#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/* Function Prototypes */
int StringCompare( const char string1[] , const char string2[] );


int main()
{
    char string1[ 20 ];
    char string2[ 20 ];

    printf("Enter First String : ");
    scanf("%19[^\n]s" , string1);

    printf("\n");


    printf("Enter Second String : ");
    scanf(" %19[^\n]s" , string2);                              //Notice the whitespace to read the string correctly

    printf("\n");

    int result = StringCompare( string1 , string2 );

    if(result == 0)
        printf("Strings Are Equal!!\n");
    else if(result > 0)
        printf("%s Is Greater Than %s\n" , string1 , string2);
    else
        printf("%s Is Smaller Than %s\n" , string1 , string2);

    return 0;
}

/*
    Function to compare 2 strings
        Input : 2 String Arrays
        Output : Similar to strcmp C function
*/
int StringCompare( const char string1[] , const char string2[] )
{
    int i = 0;
    while(string1[ i ] != '\0')
    {
        if(string1[ i ] != string2[ i ])
            break;
        i++;
    }

    return (const unsigned char)string2[ i ] - (const unsigned char)string1[ i ];
}
