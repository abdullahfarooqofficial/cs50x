#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string words[3];
    words[0] = "Hi!";
    words[1] = "BYE!";
    words[2] = "yE!";


    for(int i=0;i<3;i++)
    {
        printf("%s\n",words[i]);
    }
}
