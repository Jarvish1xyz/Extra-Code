#include<stdio.h>

int main() {
    int i=1,n,sum=0;
    printf("Enter n : ");
    scanf("%d", &n);

    do{
        if(i%2!=0) {
            sum += i;
        }
        else {
            sum -= i;
        }
        i++;
    }while(i<n);

    printf("sum = %d", sum);            

    return 0;
}