#include<stdio.h>

int main() {
    int n,avg=0,m=0;
    printf("Enter n : ");
    scanf("%d", &n);
    int a[n];

    for(int i=0; i<n; i++) {
        printf("Enter value : ");
        scanf("%d", &a[i]);
        avg+=a[i];
    }
    avg/=n;
    for(int i=0; i<n; i++) {
        if(a[i]>avg) {
            m++;
        }
    }

    printf("%d", m);

    return 0;
}