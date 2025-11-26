#include<stdio.h>
#define size 5

int DQueue[size];
int f=-1, r=-1;

void enqueue(int data) {
    if(f==0) {
        printf("Double-Ended Queue Overflow\n");
        return;
    }
    if(f==-1) {
        f=0;
    }
    else {
        f--;
    }
    DQueue[f]=data;
}

int dequeue() {
    if(r==-1) {
        printf("Double-Ended Queue Underflow\n");
        return 0;
    }
    int n=DQueue[r];
    if(r==f) {
        f=-1;
        r=-1;
    }
    else {
        r--;
    }

    return n;
}

void display() {
    if(f==-1) {
        printf("Queue is empty\n");
        return;
    }

    int i=f;
    while(i<=r) {
        printf("%d,  ", DQueue[i]);
        i++;
    }
    printf("\n");
}



int main() {

    int ans;
    f=4;
    r=3;
    enqueue(10);
    enqueue(30);
    enqueue(52);
    ans = dequeue();
    printf("\ndequeued element is %d\n", ans);
    ans = dequeue();
    printf("\ndequeued element is %d\n", ans);
    enqueue(14);
    display();
    enqueue(8);
    display();

    return 0;
}