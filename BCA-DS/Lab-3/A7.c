#include<stdio.h>

int main() {
    int i=1,n;
    float sum=0;
    printf("Enter n : ");
    scanf("%d", &n);

    do{
        sum+=(1/i);
        i++;
    }while(i<n);

    printf("sum = %.2f", sum);            

    return 0;
}