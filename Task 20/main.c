/*H******************************************************
*<<<<<<<<<<<<<<<<<<< C Language Tasks >>>>>>>>>>>>>>>>>>>
*   TASK NO.    : 20
*   AUTHOR      : AlHasan Sameh
*   DATE        : May 3rd 2019
*   COMPILER    : gcc
*   DESCRIPTION :
*           Program to simulate a simple calculator
*H*/



#include <stdio.h>
#include <stdlib.h>

int main()
{
    char Op;                                        //Variable to store operation
    int num1, num2;
    int result;

    printf("Enter The Operation : ");
    Op = getchar();

    printf("Enter The First Number : ");
    scanf("%d" , &num1);

    printf("Enter The Seconds Number : ");
    scanf("%d" , &num2);

    printf("\n");

    /* Switch Case Statement */
    switch(Op)
    {
    case '+' :
        result = num1 + num2;                                   //Calculate sum
        break;                                                  //break out of switch

    case '-' :
        result = num1 - num2;
        break;

    case '*' :
        result = num1 * num2;
        break;

    case '/' :
        if(num2 != 0)                                           //Check for division by 0
            result = num1 / num2;
        else
        {
            printf("Division By 0!!\n"
                   "Terminating Execution\n");
            return 0;
        }
        break;
    default :
        printf("Invalid Operation!!\n");
        return 0;
    }

    printf("%d %c %d = %d\n" , num1 , Op , num2 , result);

    return 0;
}
