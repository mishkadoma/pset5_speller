#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>

typedef struct node
{
    int n;
    struct node *next;
}
node;

bool search(int n, node *list);

int main(void)
{
    // create first and second nodes
    node *first = malloc(sizeof(node));
    if (first == NULL)
        exit(1);
            
    node *second = malloc(sizeof(node));
    if (second == NULL)
        exit(2);
        
    first->n = 10;
    first->next = second;

    second->n = 100;
    second->next = NULL;
    
    if (search(900, first))
        printf("Found it!\n");
    else
        printf("Element is missing =(\n");
}

bool search(int n, node *list)
{
    node *ptr = list;
    while (ptr != NULL)
    {
        if (ptr->n == n)
        {
            return true;
        }
        ptr = ptr->next;
    }
    return false;
}