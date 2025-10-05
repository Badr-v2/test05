#include <stdio.h>
#include <stdlib.h>
int main(void)
{
/*
    int x;
    printf ("x: ");
    scanf("%i",&x);
    printf("x = %i \n",x);
*/
    char* name = malloc(5);
    printf("what's ur name? \n");
    scanf("%s", name);
    printf ("ur name is: %s \n",name);
}
