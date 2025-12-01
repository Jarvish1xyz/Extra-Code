#include<stdio.h>

int main() {
    int mark;
    printf("enter your mark : ");
    scanf("%d", &mark);

    if(mark<=35) {
        printf("percentage = %d\n", mark);
        printf("Fail.");
    }
    else if(mark>=36 && mark<=45) {
        printf("percentage = %d\n", mark);
        printf("Pass class.");
    }
    else if(mark>=46 && mark<=60) {
        printf("percentage = %d\n", mark);
        printf("Second class.");
    }
    else if(mark>=61 && mark<=70) {
        printf("percentage = %d\n", mark);
        printf("First class.");
    }
    else if(mark>70 && mark <=100) {
        printf("percentage = %d\n", mark);
        printf("Distinction.");
    }
    else {
        printf("you entered invalid mark!");
    }

    return 0;
}