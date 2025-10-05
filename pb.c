#include <stdio.h>
#include <cs50.h>
#include <string.h>
typedef struct{
    string name;
    string number;
}phonenumber;
int main(void)
{
// method 1
/*    string names[] = {"Badr","Ayoub"};
    string numbers[] = {"0605110863","0661594617"};
    for (int i = 0; i < 2; i++)
    {
        if (strcmp(names[i],"Badr") == 0)
        {
            printf ("Found \n%s: %s \n",names[i],numbers[i]);
            return 0;
        }
    }
    printf ("Not found! \n");
    return 1;
*/

    phonenumber people[2];
    people[0].name = "Ayoub";
    people[0].number = "0651...";
    people[1].name = "Badr";
    people[1].number = "0605110863";
    for (int i = 0; i < 2; i++)
    {
        if (strcmp(people[i].name,"Ayoub") == 0)
        {
            printf ("Found \n%s: %s \n",people[i].name,people[i].number);
            return 0;
        }
    }
    printf ("Not found! \n");
}
