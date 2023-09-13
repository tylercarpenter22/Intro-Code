/* Lab2_Reverse Number
Tyler Carpenter
COP3223C-23Fall 0003 */

#include <stdio.h>

int main(void){
    //Declare Variables
    int num;
    int num1, num2, num3, num4, num5;
    int sum, reversed;

    //Get Input
    printf("Enter a five digit number: ");
    scanf("%d", &num);

    //Find the 1st, 2nd, 3rd, 4th, 5th number
    num1 = num % 10; //Num1
    num = num / 10;
    num2 = num % 10; //Num2
    num = num / 10;
    num3 = num % 10; //Num3
    num = num / 10;
    num4 = num % 10; //Num4
    num = num / 10;
    num5 = num % 10; //Num5
    num = num / 10;

    //Find and Print Reversed Variable
    reversed = (num1 * 10000) + (num2 * 1000) + (num3 * 100) + (num4 * 10) + (num5 * 1);
    printf("Reverse Number: %d\n", reversed);

    //Find and Print Sum
    sum = num1 + num2 + num3 + num4 + num5;
    printf("Sum of digits: %d + %d + %d + %d + %d = %d\n", num5, num4, num3, num2, num1, sum);
    return 0;
}

