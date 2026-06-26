#include <stdio.h>
#include <cs50.h>
#include <string.h>
int main(void)
{
    // Input
    string text = get_string("Inpur : ");
    // Iterate through each element in the string
    for(int i = 1; i < strlen(text);i++)
    {
        if( text[i] < text[i -1])
        {
            printf("no\n");
        return 0;
        }
    }
    printf("yes\n");
    return 0;
}
