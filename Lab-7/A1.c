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
    printf("\n");
}

int main() {

    // For Example

    int ans;
    push(10);
    push(30);
    push(52);
    push(80);
    ans = pop();
    printf("\nPopped element is %d\n", ans);
    ans = pop();
    printf("\nPopped element is %d\n", ans);
    push(14);
    display();
    push(8);
    push(99);
    push(15);
    display();


    return 0;
}