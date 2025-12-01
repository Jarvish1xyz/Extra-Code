#include<stdio.h>

int main() {
    int a,b,i;
    printf("Enter a : ");
    scanf("%d", &a);
    printf("Enter b : ");
    scanf("%d", &b);

    i=a;
    while(i<=b) {
        if(i%2==0 && i%4!=0) {
            printf("%d\n", i);
        }
        i++;
    }

    return 0;
}