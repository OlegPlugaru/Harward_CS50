#include <stdio.h>
#include <cs50.h>

int get_positive_int(string prompt);

int main(void)
{
    int i = get_positive_int("Positive integer: ");
    printf("%i\n",i);
}

// Prompt user for positive integer
int get_positive_int(string prompt)
{
    int n;
    do
    {
        n = get_int(prompt);
    } 
    while (n < 1);
    return n;
    
}