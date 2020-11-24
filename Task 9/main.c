/*H******************************************************
*<<<<<<<<<<<<<<<<<<< C Language Tasks >>>>>>>>>>>>>>>>>>>
*   TASK NO.    : 9
*   AUTHOR      : AlHasan Sameh
*   DATE        : May 3rd 2019
*   COMPILER    : gcc
*   DESCRIPTION :
*           Program to read the temperature and determine
*           the state of the weather
*H*/



#include <stdio.h>
#include <stdlib.h>

int main()
{
    int temp;                                       //Variable To Store Temperature

    printf("Enter The Temperature : ");
    scanf("%d" , &temp);

    printf("\n");
    /* Characterizing Weather */
    if(temp < 0)
        printf("Freezing Weather");
    else if(temp <= 10)
        printf("Very Cold Weather");
    else if(temp <= 20)
        printf("Cold Weather");
    else if(temp <= 30)
        printf("Normal Weather");
    else if(temp <= 40)
        printf("Hot Weather");
    else
        printf("Very Hot Weather");

    printf("\n");

    return 0;
}
