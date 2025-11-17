#include<stdio.h>
#define size 10

int checkPrime(int n) {
    int isPrime=0;

    for(int i=2; i<n; i++) {
        if(n%i==0) isPrime++;
    }

    if(isPrime==0) {
        return 1;
    }
    return 0;
}
int isThat(int n) {
    if(n==2) return 1;
    else if(n==3) return 1;
    else if(n==5) return 1;
    return 0;
}

int main() {
    int n;
    printf("Enter n : ");
    scanf("%d", &n);

    int k=0;

    for(int i=2; i<=n; i++) {
        if(n%i==0) {
            if(checkPrime(i)) {
                if(isThat(i)) k++;
                else {
                    k=0;
                    break;
                }
            }
        }
    }

    if(k!=0) {
        printf("n is Ugly nunmber.");
    }
    else {
        printf("n is not Ugly nunmber.");
    }
}