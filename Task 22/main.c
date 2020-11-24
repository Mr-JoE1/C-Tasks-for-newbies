/*H******************************************************
*<<<<<<<<<<<<<<<<<<< C Language Tasks >>>>>>>>>>>>>>>>>>>
*   TASK NO.    : 22
*   AUTHOR      : AlHasan Sameh
*   DATE        : May 3rd 2019
*   COMPILER    : gcc
*   DESCRIPTION :
*           Program to calculate the distance between 2 points
*H*/



#include <stdio.h>
#include <stdlib.h>
#include <math.h>


/* Function prototypes */
double distance( double x1 , double y1 , double x2 , double y2 );


int main()
{
    double x1, y1, x2, y2;

    /* Example Test */
    x1 = 5;
    y1 = 0;

    x2 = 0;
    y2 = 0;

    printf("The Distance Between (%f , %f) And (%f , %f) = %f\n" , x1 , y1 , x2 , y2 , distance( x1 , y1 , x2 , y2 ));
    return 0;
}

double distance( double x1 , double y1 , double x2 , double y2 )
{
    return sqrt(pow( x2 - x1 , 2 ) + pow( y2 - y1 , 2 ));           //Calculate the distance between 2 points
}
