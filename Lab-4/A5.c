#include<stdio.h>

int main() {
    int n,sum=0,p;

    printf("Enter n : ");
    scanf("%d", &n);
    
    p=3;
    for(int i=1; i<=n; i+=p) {
        sum +=i;
        p+=2;
    }

    printf("sum = %d", sum);

    return 0;
}