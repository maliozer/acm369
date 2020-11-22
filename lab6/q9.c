#include <stdio.h>

int getfibo(int n){
    if(n==0){
        return 0;
    }
    else if(n ==1){
        return 1;
    }
    else {
        return (getfibo(n-1) + getfibo(n-2));
    }
}

int main(){

    int n = 20;

    printf("Fibbonacci sereis of %d: " , n);
        
    for(int i = 0;i<n;i++) {
        printf("%d ",getfibo(i));
    }

    printf("\n");



    /*
    iterative version
        int a = 0;
        int b = 1;
        int c = a +b;

        printf("%i-%i",a,b);

        for (int i = 0; i < 10; i++)
        {
            printf("-%i",c);
            a = b;
            b = c;
            c = a+b;
        }
        
        printf("\n");
    */

    return 0;
}