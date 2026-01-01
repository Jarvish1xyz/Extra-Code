#include<stdio.h>

int main() {
    int na, nb;
    printf("Enter size of array-1 : ");
    scanf("%d", &na);
    printf("Enter size of array-2 : ");
    scanf("%d", &nb);

    int arrA[na], arrB[nb];

    printf("Enter element in array-1 : \n");
    for(int i=0; i<na; i++) {
        scanf("%d", &arrA[i]);
    }

    printf("Enter element in array-2 : \n");
    for(int i=0; i<nb; i++) {
        scanf("%d", &arrB[i]);
    }

    int n=na+nb;
    int ans[n];

    //1 2 5
    //4 6 7
    int a=0,b=0;

    for(int i=0; i<n; i++) {
        if(arrA[a]>arrB[b] || b>=nb) {
            ans[i]=arrB[b];
            b++;
        }
        else {
            ans[i]=arrA[a];
            a++;
        }
        if(a>na) a--;
    }

    //1 2 4 5 6 7

    printf("\n");
    for(int i=0; i<n; i++) {
        printf("%d", ans[i]);
    }
}