#include <stdio.h>

int main ()
{
    int num = 10;
    
    int *ptr = &num;

    printf("\nGia tri cua bien so la: %d", num);
    
    printf("\n");
    
    printf("\nDia chi cua bien so la: %p", &num);
    
    printf("\n");

    printf("\nGia tri cua bien so thong qua con tro la: %d", *ptr);
    
    printf("\n");
    
    printf("\nDia chi cua bien so thong qua con tro la: %p", ptr);
    
    printf("\n\n");

    return 0;

}