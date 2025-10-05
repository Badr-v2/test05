#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int count;
    do{
        count = get_int("Count: ");
    }while (count < 1);
    for (int i = 0; i < count; i++)
    {
        for(int x = 0; x < count; x++){
            printf ("#");
        }
        printf ("\n");
    }
}
