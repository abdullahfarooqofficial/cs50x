#include <stdio.h>
#include <cs50.h>

void print_row(int brick, int height);

int main(void)
{
    // Prompt
    int height;
    do
    {
        height = get_int("What is the height of the pyramid? ");
    }
    while(height < 1);

    // Print
    for (int i = 0; i < height; i++)
    {
        print_row(i + 1, height);
    }
}

void print_row(int brick, int height)
{
    // Print leading spaces
    for(int i = 0; i < height - brick; i++)
    {
        printf(" ");
    }
    // Print hashes
    for(int i = 0; i < brick; i++)
    {
        printf("#");
    }
    printf("\n");
}
