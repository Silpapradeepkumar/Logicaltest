#include<stdio.h>
#include<stdlib.h>

int m, n,i, gcd=0;
int main(){
    printf(" enter two numbers m & n");
    scanf("%d %d", &m, &n);

    for(i=1;i<=m;i++) {
        if((m%i == 0) && (n % i == 0)) {
            gcd =i;
        }

    }
    printf("gcd is %d",gcd);
}

