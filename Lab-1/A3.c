#include<stdio.h>

int main() {
    int a,b,ans;
    printf("Enter a : ");
    scanf("%d", &a);
    printf("Enter b : ");
    scanf("%d", &b);

    char p;
    printf("Enter arithmatic operator : ");
    scanf(" %c", &p);

    if(p=='+') {
        ans = a+b;
    }
    else if(p=='-') {
            ans = a-b;
    }
    else if(p=='*') {
            ans = a*b;
    }
    else {
        ans = a/b;
    }

    printf("ans = %d", ans);

    return 0; 
}