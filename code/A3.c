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

int findKaprekar(int n) {
    if(n<0) return 0;
    
    int l=n*n;
    int k= findLength(l);

    if(k%2!=0) return 0;

    int a=0,b=0;
    while(findLength(l)!=k/2) {
        a+=(l%10)*power(10, b);
        l/=10;
        b++;
    }

    if(l+a==n) return 1;
    else return 0;
}


int main() {
    int n;
    printf("Enter n : ");
    scanf("%d", &n);

    if(findKaprekar(n)==1){
        printf("n is Kaprekar.");
    }
    else {
        printf("n is not Kaprekar.");
    }

    return 0;
}