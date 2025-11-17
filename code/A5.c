#include<stdio.h>

int main() {
    int n;
    printf("Enter n : ");
    scanf("%d", &n);

    int q=0;
    for(int i=1; i<=n/2; i++) {
        float k=n*1.0/i;
        if(k==i+1) {
            q=1;
            break;
        }
    }
    if(q==1 || n==0) {
        printf("n is pronic number.");
    }
    else {
        printf("n is not pronic number.");
    }

    return 0;
}