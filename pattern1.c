#include <stdio.h>
int main() {
   printf("Enter the row size:");
   int row_size;
   int num = 1;
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
 