/* if_else problem 3 - Age Compare
Tyler Carpenter
COP3223C-23Fall 0003 */

#include <stdio.h>

int main(void){
    //Declare Variables
    int p1, p2, p3;

    //Get input
    printf("Enter ages of three people (person 1, person 2, and person 3): ");
    scanf("%d %d %d", &p1, &p2, &p3);
    
    //Determine who is youngest
    if(p1 < p2 && p1 < p3){
        printf("Person 1 is youngest");
    }
    else if(p2 < p1 && p2 < p3){
        printf("Person 2 is youngest");
    }
    else if(p3 < p1 && p3 < p2){
        printf("Person 3 is youngest");
    }

    return 0;
}

