#include <stdio.h>
#include <cs50.h>
#include <string.h>
int main(void)
{
// numbers
/*    int numbers[] = {1,3,6,9,7};
    for (int i = 0; i < 5; i++)
    {
        if (numbers[i] == 0){
            printf ("Found in %d steps \n",i + 1);
            return 0;
        }
    }
    printf ("Not found \n");
    return 1;
*/
// Names
    string names[] = {"badr","ayoub","adam"};
    for (int i = 0; i < 3; i++)
    {
        if (strcmp(names[i],"badr") == 0){
            printf ("Found in %d steps \n",i + 1);
            return 0;
        }
    }
    printf ("Not found \n");
    return 1;
}
