/*H******************************************************
*<<<<<<<<<<<<<<<<<<< C Language Tasks >>>>>>>>>>>>>>>>>>>
*   TASK NO.    : 10
*   AUTHOR      : AlHasan Sameh
*   DATE        : May 3rd 2019
*   COMPILER    : gcc
*   DESCRIPTION :
*           Program to read an alphabet character and
*           determine if it was upper or lower case
*H*/



#include <stdio.h>
#include <stdlib.h>

int main()
{
    char C;

    printf("Enter An Alphabet Character : ");
    C = getchar();

    printf("\n");

    if(C >= 'A' && C <= 'Z')                        //Character is capital case
    {
        printf("%c Is A Capital Case Character\n" , C);
        printf("It Is Character Number %d" , C - 'A' + 1);      //Print Its Index
    }
    else if(C >= 'a' && C <= 'z')                   //Character is small case
    {
        printf("%c Is A Small Case Character\n" , C);
        printf("It is Character Number %d" , C - 'a' + 1);      //Print Its Index
    }
    else
        printf("Invalid Character!!");

    printf("\n");

    return 0;
}
