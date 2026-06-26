// // Gets an int from user using scanf

#include <stdio.h>

int main(void)
{
    int n;
    printf("n: ");
    scanf("%i", &n);
    printf("n: %i\n", n);
}

// // Dangerously gets a string from user using scanf with array

// #include <stdio.h>

// int main(void)
// {
//     char s[4];
//     printf("s: ");
//     scanf("%s", s);
//     printf("s: %s\n", s);
// }

// // Using malloc

// #include <stdio.h>
// #include <stdlib.h>

// int main(void)
// {
//     char *s = malloc(4);
//     if (s == NULL)
//     {
//         return 1;
//     }
//     printf("s: ");
//     scanf("%s", s);
//     printf("s: %s\n", s);
//     free(s);
//     return 0;
// }

// #include <stdio.h>

// int main(void)
// {
//     char s[4];
//     printf("s: ");
//     scanf("%s", s);
//     printf("s: %s\n", s);
// }
