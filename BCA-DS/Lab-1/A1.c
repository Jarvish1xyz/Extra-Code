#include<stdio.h>

int main() {
    int a,b;
    printf("Enter a : ");
    scanf("%d", &a);
    printf("Enter b : ");
    scanf("%d", &b);
    

    if(a>b) {
        printf("a is largest.");
    }
    else {
        printf("b is largest.");
    }


    return 0;
}