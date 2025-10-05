#include <stdio.h>
#include <cs50.h>

int main (void)
{
    const int x = get_int("Num1: ");
    int y = get_int("Num2: ");
    printf ("%.2f \n",(float) x / y);
}
