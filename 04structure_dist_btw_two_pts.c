#include <stdio.h>
#include <math.h>
 /*
    Program: Find distance between two points of cartesian plane

    Description:
    This program uses a structure to store coordinates two points 
    and determines the distance between them.

    Concepts Used:
    - Structures
    
*/


int main()
{
    // Defining structure
    struct point
    {
        float x, y;
    };

    // Declaring structure variable's (two points for determining distance between them)
    struct point P1, P2;

    float distance;

    // Input coordinates of points 
    printf("Enter coordinates of point 1 : ");
    scanf("%f %f", &P1.x, &P1.y);
    printf("Enter coordinates of point 2 : ");
    scanf("%f %f", &P2.x, &P2.y);

    // Distance calculation
    distance = sqrt(pow(P1.x - P2.x,2) + pow(P1.y - P2.y,2));
 
   // Output
    printf("Distance between two points is : %.2f", distance);

    return 0;
}
