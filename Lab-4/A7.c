#include<stdio.h>

int main() {
    int n;
    float sum=0;
    printf("Enter n : ");
    scanf("%d", &n);

    for(int i=1; i<=n; i++) {
        sum+=(1/i);
    }

    printf("sum = %.2f", sum);            

    return 0;
}