#include <stdio.h>

void ptrArr(int *arr, int size)
{
    for(int i = 0; i < size; i++)
        {
            printf("%d ", *(arr + i));
        }
}

void editArr(int *arr, int newValue, int pos, int size)
{
    if (pos >= 0 && pos < size)
    { 
        arr[pos] = newValue;
    }
    
        else
        { 
            printf("\nVi tri cua phan tu khong hop le!\n");
        }
}

int main ()
{
    int arr[5] = {1, 2, 3, 4, 5};
    
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("\nMang truoc khi thay doi la: ");

    ptrArr(arr, size);

    printf("\n");

    printf("\nMang sau khi duoc thay doi la: ");
    
    editArr(arr, 10, 3, size);

    ptrArr(arr, size);

    printf("\n\n");

    return 0;

}