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
    node1.n = 5;
    node1.next = malloc(sizeof(node));
    node1.next->n = 10;
    node1.next->next = malloc(sizeof(node));
    node1.next->next->n = 15;
    
    while (true)
    {
        int user_input = get_int();
        if (user_input < 0)
        {
            printf("Enter the positive number:");
            return 5;
        }
        
        
        if (search(user_input, &node1))
            printf("%d is in the list\n", user_input);
        else
            printf("Not in the list\n");
    }    
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