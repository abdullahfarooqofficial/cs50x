#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{

    // Get a string
    char *s= get_string("s : ");

    // Allocate memory for another string
    string t = malloc(strlen(s) +1);

    // Copy string into memory, including '\0'
    for(int i = 0,n = strlen(s); i<=n; i++)
    {
        t[i] = s[i];
    }
    // Capitalize copy
    if(strlen(t) > 0){
        t[0] = toupper(t[0]);
    }

    // Print string twice
    printf("s: %s\n", s);
    printf("t: %s\n", t);
}
