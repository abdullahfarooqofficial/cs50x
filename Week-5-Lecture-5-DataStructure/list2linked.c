// Build a linked list by prepending nodes.
// Each new node becomes the new head of the list,
// so the numbers are stored in reverse order
// of the user's input.
// Start to build a linked list by prepending nodes
// Traverse the linked list from the head to the end,
// printing each node's number.

#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int number;
    struct node *next;
} node;

int main(void)
{
    // Memory for numbers
    node *list = NULL;

    // Build list
    for (int i = 0; i < 3; i++)
    {
        // Allocate node for number
        node *n = malloc(sizeof(node));
        if (n == NULL)
        {
            return 1;
        }
        n->number = get_int("Number: ");
        n->next = NULL;

        // Prepend node to list
        n->next = list;
        list = n;
    }
    // Print numbers
    node *ptr = list;
    while (ptr != NULL)
    {
        printf("%i\n", ptr->number);
        ptr = ptr->next;
    }
    return 0;
}
