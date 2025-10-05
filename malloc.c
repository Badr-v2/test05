#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
int main(void){
    char* name = get_string("name: ");
    char* Name = malloc(strlen(name) + 1);
    if (Name == NULL)
    {
        return 1;
    }
/* method 1:
    for (int i = 0; i < strlen(name) + 1; i++)
    {
        Name[i] = name[i];
    }
*/
// method 2:
    strcpy(Name,name);
    Name[0] = toupper(Name[0]);
    printf ("name: %s \n",name);
    printf ("Name: %s \n",Name);
    free(Name);
}
