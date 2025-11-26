#include<stdio.h>

int main() {
    int n,arr[20];
    printf("Enter size of array : ");
    scanf("%d", &n);

    for(int i=0; i<n; i++) {
        printf("Enter element-%d : ", (i+1));
        scanf("%d", &arr[i]);
    }

    printf("\nArray elements : \n");
    for(int i=0; i<n; i++) {
        printf("%d, ", arr[i]);
    }

    for(int i=0; i<n; i++) {
        arr[i]=arr[i+1];
    }
    n--;
    printf("\nArray elements after deleting the last element : \n");
    for(int i=0; i<n; i++) {
        printf("%d, ", arr[i]);
    }

    return 0;
}