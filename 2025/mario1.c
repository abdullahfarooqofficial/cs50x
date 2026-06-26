#include <stdio.h>
#include <cs50.h>

void print_row(int bricks, int height);

int main(void)
{
    // Prompt
    int height;
    do
    {
        height = get_int("What is the height of the pyramid? ");
    }
    while (height < 1);

    // Print
    for (int i = 0; i < height; i++)
    {
        print_row(i + 1, height);
    }
}

void print_row(int bricks, int height)
{
    // Print leading spaces
    for (int i = 0; i < height - bricks; i++)
    {
        printf(" ");
    }
    // Print bricks
    for (int i = 0; i < bricks; i++)
    {
        printf("#");
    }
    // Print a new line after each row
    printf("\n");
}
