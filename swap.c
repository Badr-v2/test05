#include <stdio.h>
#include <cs50.h>
void swap(int* a, int* b);
int main(void)
{
    int x = get_int ("x: ");
    int y = get_int ("y: ");
    swap(&x,&y); //
    printf ("x: %i \ny: %i \n",x,y);
}
void swap(int* a, int* b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
