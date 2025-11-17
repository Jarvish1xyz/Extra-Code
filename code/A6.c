#include<stdio.h>
#define size 30

int stack[size];
int top=-1;

void push(int n) {
    stack[++top]=n;
}

int pop() {
    return stack[top--];
}

int check(int n) {
    for(int i=0; i<top; i++) {
        if(stack[i]==n) return 1;
    }

    return 0;
}

int powerSum(int n) {
    int ans=0;
    while(n>0) {
        ans+=(n%10)*(n%10);
        n/=10;
    }

    return ans;
}

int main() {
    int n;
    printf("Enter n : ");
    scanf("%d", &n);

    int k=0,l=0;
    while(l!=1) {
        int ps = powerSum(n);

        if(check(ps)==1) l++;

        if(ps==1) {
            k++;
            break;
        }
        else {
            push(n);
            n=ps;
        }
        
    }

    if(k==1) {
        printf("n is Happy number.");
    }
    else {
        printf("n is not Happy number.");
    }

    return 0;
}