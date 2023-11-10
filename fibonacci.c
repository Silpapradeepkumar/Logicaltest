#include<stdio.h>
#include<stdlib.h>

int n,i,x=0,y=1,sum = 0;
int main(){
 printf("enter the number n");
 scanf("%d",&n);
for(i=0;i<=n;i++){
sum =x+y;
y=x;
x=sum;
// printf(" fibonacci series is %d",y);
}
printf(" last no is: %d",y);
}