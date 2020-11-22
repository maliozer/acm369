/* Swapping Program with pointers in C */
/*This is the C subroutine that does the swap using pointers.*/
#include <stdio.h>

/* interchange *px and *py */
void swap(int *px, int *py)  
{  
    int temp;
    temp = *px;
    *px = *py;
    *py = temp;
}

int main()
{
    int a,b,c;

    scanf("%d",&a);
    scanf("%d",&b);
    
    printf("%d %d \n",a,b);
    
    swap(&a, &b);

    printf("%d %d \n",a,b);

    return 0;
}

