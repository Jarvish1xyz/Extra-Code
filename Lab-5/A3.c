#include<stdio.h>

int main() {
    int n,max,min,sum=0;
    float avg;
    printf("Enter n : ");
    scanf("%d", &n);
    int a[n];

    for(int i=0; i<n; i++) {
        printf("Enter value : ");
        scanf("%d", &a[i]);
    }
    max=a[1];
    min=a[1];

    for(int i=0; i<n; i++) {
        if(max<a[i]) {
            max=a[i];
        }
        if(min>a[i]) {
            min=a[i];
        }
        sum+=a[i];
    }
    avg=(sum*1.0)/n;

    printf("max=%d, min=%d, sum=%d, avg=%.2f", max,min,sum,avg);

    return 0;
}