#include<stdio.h>

int main() {
    int i=1,n;
    float sum=0;
    printf("Enter n : ");
    scanf("%d", &n);

    while(i<=n) {
        sum+=(1/i);
        i++;
    }

    printf("sum = %.2f", sum);            

    return 0;
}