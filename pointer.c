#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int x = 7;
    int *p = &x;
    printf ("%p \n",&x);
    printf ("%d \n",*p);
}
