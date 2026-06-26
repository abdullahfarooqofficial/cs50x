#include <stdio.h>
int main(void)
{
    // char *s = "Hi!";
    // Prints a string's chars
    // printf("%c\n",s[0]);
    // printf("%c\n",s[1]);
    // printf("%c\n",s[2]);
    // printf("%c\n",s[3]);

    // Prints a string's chars via pointer arithmetic
    char* s = "Hi!";
    // printf("%c\n",*s);
    // printf("%c\n",*(s+1));
    // printf("%c\n",*(s+2));
    // printf("%c\n",*(s+3));

    // Prints substrings via pointer arithmetic
    printf("%s\n", s);
    printf("%s\n", s + 1);
    printf("%s\n", s + 2);
}
