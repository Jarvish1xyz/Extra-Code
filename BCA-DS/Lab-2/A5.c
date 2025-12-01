#include<stdio.h>

int main() {
    int i=1,n,sum=0,p;

    printf("Enter n : ");
    scanf("%d", &n);
    
    p=3;
    while(i<=n) {
        sum +=i;
        i += p;
        p+=2;
    }

    printf("sum = %d", sum);

    return 0;
}