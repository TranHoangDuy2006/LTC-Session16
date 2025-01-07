#include <stdio.h>

#include <stdlib.h>

void swap(int *x, int *y)
{
    int temp;

    temp = *x;

    *x = *y;

    *y = temp;
}

int main ()
{
    int x = 10;
    
    int y = 20;

    int *ptrX = &x;
    
    int *ptrY = &y;

    printf("\nGia tri x, y ban dau: x = %d, y = %d", x, y);

    printf("\n");

    swap(&x, &y);

    printf("\nGia tri x, y sau khi bien doi: x = %d, y = %d", x, y);

    printf("\n\n");

    return 0;
}