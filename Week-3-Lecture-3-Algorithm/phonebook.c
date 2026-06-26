#include <cs50.h>
#include <stdio.h>
#include <string.h>

typedef struct{
    string name;
    string number;
}person;
int main(void)
{
     person persons[3];
    // Arrays of strings
    // string names[] = {"Ali", "Raza", "Faraz"};
    // string numbers[] = {"+1-617-495-1432", "+1-617-435-1054", "+1-949-468-3553"};
    persons[0].name = "Ali";
    persons[0].number = "+1-617-495-1432";
    persons[1].name = "Raza";
    persons[1].number ="+1-617-435-1054";
    persons[2].name = "Faraz";
    persons[2].number =  "+1-949-468-3553";


    // Search for name
    string name = get_string("Name: ");
    for (int i = 0; i < 3; i++)
    {
        if (strcmp(persons[i].name, name) == 0)
        {
            printf("Found %s\n", persons[i].number);
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}
