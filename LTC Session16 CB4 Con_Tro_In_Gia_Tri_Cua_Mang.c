#include <stdio.h>

void printArr(int *arr, int size)
{
    for(int i = 0; i < size; i++)
        {
            printf("%d ", *(arr + i));
        }

}

int main ()
{
    int arr[5] = {1, 2, 3, 4, 5};
    
    int size = sizeof(arr) / sizeof(arr[0]);
    
    printf("\nCac phan tu trong mang la: ");

    printArr(arr, size);

    printf("\n\n");

    return 0;

}