#include<stdio.h>

int i,j,row_size;
int num=1;
int main(){

printf("enter the limit");
scanf("%d",&row_size);
for(int j = 0; j < row_size; j++) {
       for(int i = row_size - 1; i > j; i--) {
           printf(" ");
       }
       for(int i = 0; i < num; i++) {
           printf("%d",num);
       }
       num += 2;
       printf("\n");
}

}