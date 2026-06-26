#include <stdio.h>
int main(void)
{
    char *s = "Hi!";
    // printf("%c\n",n);
    // printf("%s\n",&n[0]);
    // printf("%c\n",&n[1]);
    printf("%c\n",*s);
    printf("%c\n",*(s+1));
    printf("%c\n",*(s+2));
}
