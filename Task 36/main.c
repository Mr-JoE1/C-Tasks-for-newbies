/*H******************************************************
*<<<<<<<<<<<<<<<<<<< C Language Tasks >>>>>>>>>>>>>>>>>>>
*   TASK NO.    : 36
*   AUTHOR      : AlHasan Sameh
*   DATE        : May 3rd 2019
*   COMPILER    : gcc
*   DESCRIPTION :
*           Program to check whether 2 strings are anagrams
*H*/



#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/* Function Prototypes */
int IsAnagrams( const char string1[] , const char string2[] );


int main()
{
    char string1[ 100 ];
    char string2[ 100 ];

    printf("Enter First String : ");
    scanf("%99[^\n]s" , string1);

    printf("\n");

    printf("Enter Second String : ");
    scanf(" %99[^\n]s" , string2);

    printf("\n");

    if(IsAnagrams( string1 , string2 ))
        printf("%s And %s Are Anagrams!!\n" , string1 , string2);
    else
        printf("%s And %s Are Not Anagrams!!\n" , string1 , string2);

    return 0;
}


int IsAnagrams( const char string1[] , const char string2[] )
{
    int length1 = strlen( string1 );
    int length2 = strlen( string2 );

    if(length1 != length2)
        return 0;

    /*  Array to indicate string2 characters' status
        Values : 1 if match already found in string1
                 0 if no match found
    */
    int found[ length2 ];

    for(int i = 0;i < length2;i++)
        found[ i ] = 0;


    for(int i = 0;i < length1;i++)
    {
        for(int j = 0;j < length2;j++)
        {
            if(found[ j ])                              //Skip if match was already found
                continue;

            if(string1[ i ] == string2[ j ])
            {
                found[ j ] = 1;
                break;
            }
        }
    }

    for(int i = 0;i < length2;i++)
        if(found[ i ] == 0)                             //If any characters don't have any match
            return 0;

    return 1;
}
