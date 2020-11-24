/*H******************************************************
*<<<<<<<<<<<<<<<<<<< C Language Tasks >>>>>>>>>>>>>>>>>>>
*   TASK NO.    : 12
*   AUTHOR      : AlHasan Sameh
*   DATE        : May 3rd 2019
*   COMPILER    : gcc
*   DESCRIPTION :
*           Program to input a number of grades from the
*           user and calculate their average
*H*/



#include <stdio.h>
#include <stdlib.h>

int main()
{
    int grade;
    int counter;                                    //Loop counter
    int total;

    /* Input The First Grade */
    printf("Enter Grade (-1 To End) : ");
    scanf("%d" , &grade);

    total = 0;                                      //Initialize total
    counter = 0;                                    //Initialize loop counter

    while(grade != -1)                              //Loop continuation condition
    {
        total += grade;                             //Accumulate grades
        counter++;                                  //Increment loop counter

        printf("Enter Grade (-1 To End) : ");
        scanf("%d" , &grade);
    }

    printf("\n");

    if(counter != 0)                                //Check for division by 0
        printf("Average = %.2f\n" , (float)total / counter);        //Display 2-digit precision result
    else
        printf("You Did Not Input Any Grades!!\n");


    return 0;
}
