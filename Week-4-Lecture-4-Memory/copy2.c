#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{

    // Get a string
    char *s= get_string("s : ");
    if(s == NULL){
        return 1;
    }

    // Allocate memory for another string
    string t = malloc(strlen(s) +1);
    if(t == NULL){
        return 1;
    }

   // Copy string into memory
    strcpy(t, s);

    // Capitalize copy
    if(strlen(t) > 0){
        t[0] = toupper(t[0]);
    }

    // Print string twice
    printf("s: %s\n", s);
    printf("t: %s\n", t);

    // Free memory
    free(t);
    return 0;
}
