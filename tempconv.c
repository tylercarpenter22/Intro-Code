/* Intro Problem 2 - Temperature Converter
Tyler Carpenter
COP3223C-23Fall 0003 */

#include <stdio.h>

int main(void){
    float c, f; // Def floats
    printf("Enter the temperature in Fahrenheit: "); //Get input
    scanf("%f", &f);
    c = 5.0/9.0 *(f - 32); //Convert to Celsius
    printf("\nThe temperature in Celsius is: %f", c); //Output
    return 0;
}

