#include <stdio.h>
#include <string.h>
    
sllnode* create(int value);

int main(void)
{
 sllnode *new = create(6);
 return 0;
}

sllnode* create(int value)
{
    
    typedef struct sllist
    {
        int val;
        struct sllist *next;
    }
    sllnode;
    
    //allocating memory for struct:
    sllnode *new = malloc(sizeof(sllnode));
    if (new == NULL)
    {
        printf("unable to allocate memory\n");
        return 1;
    }
    
    //creating singly linked list:

    sllnode.val = value;
    sllnode.next = NULL;
    return &sllnode;
}