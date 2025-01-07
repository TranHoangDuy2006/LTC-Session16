#include <stdio.h>

int calculateSum(int a, int b, int *result) 
{
    return *result = a + b;
}

int main() 
{
    int num1 = 5; 
    
    int num2 = 7;   
    
    int result = calculateSum(num1, num2, &result);        

    printf("\nTong cua %d va %d la: %d\n", num1, num2, result);

    printf("\n");

    return 0;
}
