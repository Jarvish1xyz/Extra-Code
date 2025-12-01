#include<stdio.h>

int main() {
    int n,i;
    printf("Enter n : ");
    scanf("%d", &n);
    int a[n];

    for(i=0; i<n; i++) {
        printf("Enter value : ");
        scanf("%d", &a[i]);
    }

    for(i=0; i<n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}