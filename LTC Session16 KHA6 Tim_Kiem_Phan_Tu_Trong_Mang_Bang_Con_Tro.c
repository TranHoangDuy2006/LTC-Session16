#include <stdio.h>

int ptrArr(int *arr, int size, int findValue)
{
    for(int i = 0; i < size; i++)
        {
            if(*(arr + i) == findValue)
            {
                return i;
            }
        }
    
    return -1;
}

int main ()
{
    int arr[5] = {10, 20, 30, 40, 50};
    
    int size = sizeof(arr) / sizeof(arr[0]);
    
    int findValue = 50;

    int loc = ptrArr(arr, size, findValue);

    if(loc != -1)
        {
            printf("\nSo %d da duoc tim thay tai vi tri %d!", findValue, loc);
            
            printf("\n\n");

        }

        else
            {
                printf("\nKhong tim thay vi tri cua so %d trong mang!",findValue);
                
                printf("\n\n");
            }

    return 0;

}



