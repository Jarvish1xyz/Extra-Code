#include<stdio.h>

int main() {
    int n, arr[20];
    printf("Enter size of array : ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\nArray elements : \n");
    for(int i=0; i<n; i++) {
        printf("%d, ", arr[i]);
    }

    int k;
    printf("Enter an element to enter at the end : ");
    scanf("%d", &k);

    arr[n]=k;
    n++;

    printf("\nArray after inserting element at the end : \n");
    for(int i=0; i<n; i++) {
        printf("%d, ", arr[i]);
    }

    return 0;
}