/*H******************************************************
*<<<<<<<<<<<<<<<<<<< C Language Tasks >>>>>>>>>>>>>>>>>>>
*   TASK NO.    : 7
*   AUTHOR      : AlHasan Sameh
*   DATE        : May 3rd 2019
*   COMPILER    : gcc
*   DESCRIPTION :
*           Program to read a point in 2-D coordinates
*           and determine where it lies on the X-Y plane
*H*/



#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* Variables To Store Coordinates */
    int X_coordinate;
    int Y_coordinate;

    printf("Enter Coordinates : ");
    scanf("%d%d" , &X_coordinate , &Y_coordinate);                                      //Entering 2 space separated values

    printf("\n");

    if(X_coordinate > 0 && Y_coordinate > 0)
        printf("(%d , %d) Lies In The 1st Quadrant\n" , X_coordinate , Y_coordinate);
    else if(X_coordinate < 0 && Y_coordinate > 0)
        printf("(%d , %d) Lies In The 2nd Quadrant\n" , X_coordinate , Y_coordinate);
    else if(X_coordinate < 0 && Y_coordinate < 0)
        printf("(%d , %d) Lies In The 3rd Quadrant\n" , X_coordinate , Y_coordinate);
    else if(X_coordinate > 0 && Y_coordinate < 0)
        printf("(%d , %d) Lies In The 4th Quadrant\n" , X_coordinate , Y_coordinate);
    else
        printf("(%d , %d) Lies On The Axes\n" , X_coordinate , Y_coordinate);

    return 0;
}
