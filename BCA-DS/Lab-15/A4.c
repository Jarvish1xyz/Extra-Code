#include<stdio.h>
#include<stdlib.h>

int main() {
    int n;
    printf("Enter n : ");
    scanf("%d", &n);

    int *arr = (int *)malloc(n*sizeof(int));

    for(int i=0; i<n; i++) {
        scanf("%d", arr+i);
    }
    int max=*arr;

    for(int i=0; i<n; i++) {
        if(max<*(arr+i)) {
            max=*(arr+i);
        }
    }

    printf("%d", max);

    free(arr);
    return 0;
}