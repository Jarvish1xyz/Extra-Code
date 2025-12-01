#include<stdio.h>

int main() {
    int a,b;
    printf("Enter a : ");
    scanf("%d", &a);
    printf("Enter b : ");
    scanf("%d", &b);

    for(int i=a; i<=b; i++) {
        if(i%2==0 && i%4!=0) {
            printf("%d\n", i);
        }
    }

    return 0;
}