/* if_else problem 2-Same Line?
Tyler Carpenter
COP3223C-23Fall 0003 */

#include <stdio.h>
#include <math.h>

int main(void){
    //Declare Variables
    float x1, x2, x3, y1, y2, y3, m1, m2;

    //Get input
    printf("Enter coordinates (x1, y1): ");
    scanf("%f %f", &x1, &y1);
    printf("Enter coordinates (x2, y2): ");
    scanf("%f %f", &x2, &y2);
    printf("Enter coordinates (x3, y3): ");
    scanf("%f %f", &x3, &y3);

    //Calculate slope
    m1 = fabs(y2 - y1) / fabs(x2 - x1);
    m2 = fabs(y3 - y2) / fabs(x3 - x2);

    //Determine if points fall on same line
    if (m1 == m2){
        printf("They fall on one straight line");
    }
    else{
        printf("They do not fall on one straight line");
    }

    return 0;
}

