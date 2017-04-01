#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>

typedef struct node
{
    int n;
    struct node *next;
}
node;

struct node node1;


bool search(int n, node *list);

int main(void)
{
    
    node1.n = 4;
    if (search(4, &node1))
        printf("4 is in the list\n");
    else
        printf("Not in the list\n");
    
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