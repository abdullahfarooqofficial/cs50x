#include <stdio.h>
#include <cs50.h>
#include <string.h>
int main(void){
    char *i = get_string("i = " );
    char *j = get_string("j = " );
    if(strcmp(i,j) == 0)
    {
        printf("same\n");
    }
    else
    {
        printf("no same\n");
    }

    // Print strings
    printf("%s\n", i);
    printf("%s\n", j);

    // Print strings' addresses
    printf("%p\n", i);
    printf("%p\n", j);
}
