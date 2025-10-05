#include <stdio.h>
#include <cs50.h>
void draw(int height);
int main(void){
    int height = get_int("Height: ");
    draw(height);
}

void draw(int height)
{
    if (height == 0)
    {
        return;
    }
    for (int i = 0; i < height; i++)
    {
        printf ("#");
    }
    printf ("\n");
    draw (height - 1);
}
