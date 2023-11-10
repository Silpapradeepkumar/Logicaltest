#include<stdio.h>
#include<stdlib.h>
int main(){

    int n, a, b;

    printf("enter the no of liters of the water :");
    scanf("%d", &n);
    if(n<=100){
        n = n * 15 ;
        printf("%d",n);
    }
    

    if(n>100 && n< 200)
    {
       a =n % 100;
       b = (n * 15) + a;
       printf("  %d",b);
    }
    

}
    
    

