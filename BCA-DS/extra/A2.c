#include<stdio.h>
#include<stdlib.h>

int main() {
    int n;
    printf("Enter number of element : ");
    scanf("%d", &n);

    int *arr = (int *)malloc(n*sizeof(int));
    
    for(int i=0; i<n; i++) {
        printf("Enter elemnent-%d : ", i+1);
        scanf("%d", (arr+i));
    }
    
    int del;
    printf("Enter elemenet for replace: ");
    scanf("%d", &del);
    
    for(int i=0; i<n; i++){
        if(*(arr+i)==del) {
            *(arr+i)=-1;
        }
    }
    
    for(int i=0; i<n; i++) {
        printf("%d, ", *(arr+i));
    }

    return 0;
}