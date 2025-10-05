#include <stdio.h>
#include <cs50.h>

float discount(float regular,int percent){
    return regular * (100 - percent) / 100;
}

int main(void){
    float regular = get_float("Regular price: ");
    int percent = get_int("Percent: ");
    float sale = discount(regular, percent);
    printf ("Price: %.2f \n",sale);
}
