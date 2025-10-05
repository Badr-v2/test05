#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
int main(void)
{
//method 1
/*
    string uppercase = get_string("Before: ");
    printf ("After: ");
    for (int i = 0 ; i < strlen(uppercase); i++)
    {
        if (islower(uppercase[i]) != 0)
        {
            printf ("%c",uppercase[i] - 32);
        }else{
            printf ("%c",uppercase[i]);
        }
    }
    printf ("\n"); */
//method 2
    string uppercase = get_string("Before: ");
    printf ("After: ");
    for (int i = 0; i < uppercase[i];i++)
    {
        printf ("%c",toupper(uppercase[i]));
    }
    printf("\n");


}
