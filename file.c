#include <stdio.h>

int main(void)
{
    FILE* myfile = fopen("phonebook","a");
    char* name;
    printf ("name: ");
    scanf ("%s",&name);
    char* phone;
    printf ("phone: ");
    scanf("%s",&phone);
    fprintf (myfile,"name: %s \nphone: %s",name,phone);
    fclose(myfile);
}