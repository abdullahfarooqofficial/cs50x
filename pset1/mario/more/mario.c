#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;

    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);

    for (int row = 0; row < height; row++)
    {
        // Left spaces
        for (int spaces = 0; spaces < height - row - 1; spaces++)
        {
            printf(" ");
        }

        // Left pyramid
        for (int hashes = 0; hashes < row + 1; hashes++)
        {
            printf("#");
        }

        // Gap
        printf("  ");

        // Right pyramid
        for (int hashes = 0; hashes < row + 1; hashes++)
        {
            printf("#");
        }

        printf("\n");
    }
}
