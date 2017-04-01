#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

void swap(int x, int y);
void pointers_swap(int *x, int *y);

int main(void)
{
    int a = 10;
    int b = 20;
    
    printf("Before swap: a = %d, b = %d\n", a, b);
    
    //trying swap without pointers
    
    swap(a, b);
    printf("After swap: a = %d, b = %d\n", a, b);
    
    pointers_swap(&a, &b);
    printf("After pointers_swap: a = %d, b = %d\n", a, b);
    
    malloc_swap(a, b);
    printf("After malloc_swap: a = %d, b = %d\n", a, b);
    return 0;
}

void swap(int x, int y)
{
    int tmp = x;
    x = y;
    y = tmp;
    printf("swap...\n");
}

void pointers_swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
    printf("pointers_swap...\n");
}
