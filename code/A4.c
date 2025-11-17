#include<stdio.h>

int findLength(int n) {
    int k=0;
    while(n>0) {
        k++;
        n/=10;
    }

    return k;
}

int power(int b, int p) {
    int ans=1;
    for(int i=1; i<=p; i++) {
        ans*=b;
    }

    return ans;
}

int main() {
    int n;
    printf("Enter n : ");
    scanf("%d", &n);

    int l=findLength(n);
    int k=n*n;
    int a=0,b=0;
    while(l>0) {
        a+=(k%10)*power(10,b);
        b++;
        k/=10;
        l--;
    }

    if(a==n) printf("n is Automorphic.");
    else printf("n is not Automorphic.");

    return 0;
}