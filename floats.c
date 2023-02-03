#include <cs50.h>
#include <stdio.h>

int main(void)
{   
   // Prompt user for x 
   float x = get_double("x:");
   
   // Prompt user for y
   float y = get_double("y:");
   
   // Perform Arithmetics 
   printf("x + y = %f\n", x + y);
   printf("x - y = %f\n", x - y);
   printf("x * y = %f\n", x * y);
   printf("x / y = %.50f\n", x / y);
   
}