#include <stdio.h>

int i,j, n, k, x;
int a[20];
int main(){
    printf("enter the size N & No of largest elements K");
    scanf("%d%d",&n,&k);

    printf("enter the elements of the array");
    for(i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
        for(i=1;i<=n;i++){
            for(j=i+1;j<=i;j++){

            if(a[i]>a[j]){
                a[i]= a[j];
                a[j]=a[j+1];
                a[j+1]=a[i];
            }
        
            }
    }
    printf("elements of the array are",&a[i]);

}