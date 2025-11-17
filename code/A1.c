#include<stdio.h>

int main() {
    int n;
    printf("Enter n : ");
    scanf("%d", &n);

    int isPrime=0;

    for(int i=2; i<n; i++) {
        if(n%i==0) isPrime++;
    }

    if(isPrime==0) {
        printf("n is prime.");
    }
    else {
        printf("n is not prime.");
    }

    return 0;
}