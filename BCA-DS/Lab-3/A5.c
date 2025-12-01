#include<stdio.h>

int main() {
    int i=1,n,sum=0,p;

    printf("Enter n : ");
    scanf("%d", &n);
    
    p=3;
    do{
        sum +=i;
        i += p;
        p+=2;
    }while(i<n);

    printf("sum = %d", sum);

    return 0;
}