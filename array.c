#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int length = get_int("How many brothers? \n");
    string brothers[length];
    for (int i = 0; i < length; i++)
    {
        brothers[i] = get_string("Brother %i: ", i + 1);
    }
    printf ("My name is %s \n",brothers[1]);
}
