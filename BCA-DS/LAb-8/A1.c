#include<stdio.h>
#define size 5

int stack[size];
int top=-1;

void push(int data) {
    if(top>=size-1) {
        printf("Stack Overflow\n");
        return;
    }
    top++;
    stack[top]=data;
    return;
}

int pop() {
    if(top==-1) {
        printf("Stack Underflow\n");
        return 0;
    }

    top--;
    return stack[top+1];
}

void display() {
    if(top==-1) {
        printf("Stack is empty\n");
        return;
    }

    int i=top;
    while(i>=0) {
        printf("%d,  ", stack[i]);
        i--;
    }
    printf("\n");
}

int peep(int n) {
    if(top-n+1 < 0) {
        printf("Stack Underflow\n");
        return 0;
    }
    return stack[top-n+1];
}

void change(int n, int data) {
    if(top-n+1<0) {
        printf("Stack Underflow\n");
        return;
    }
    stack[top-n+1]=data;
    return;
}

int main() {

    // For Example
    push(10);
    push(30);
    push(14);
    push(8);

    

    int ans;
    change(4,20);
    ans=peep(3);
    printf("\nPeeped element is %d\n", ans);
    change(2, 21);
    ans=peep(2);
    printf("\nPeeped element is %d\n", ans);

    return 0;
}