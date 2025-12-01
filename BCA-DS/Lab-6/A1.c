#include<stdio.h>

int main() {
    int n, arr[20];
    printf("Enter size of array : ");
    scanf("%d", &n);

    printf("\n");
    for(int i = 0; i < n; i++) {
        printf("Enter element-%d : ", (i+1));
        scanf("%d", &arr[i]);
    }

    printf("\nArray elements : \n");
    for(int i=0; i<n; i++) {
        printf("%d, ", arr[i]);
    }

    int k;
    printf("Enter an element to enter at the beginning : ");
    scanf("%d", &k);

    for(int i=n; i>0; i--) {
        arr[i]=arr[i-1];
    }

    arr[0]=k;
    n++;

    printf("\nArray after inserting element at the beginning : \n");
    for(int i=0; i<n; i++) {
        printf("%d, ", arr[i]);
    }

    return 0;
}