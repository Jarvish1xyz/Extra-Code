#include<stdio.h>
#define size 5

int queue[size];
int f=-1, r=-1;

void enqueue(int data) {
    if(r>=size-1) {
        printf("Queue Overflow\n");
        return;
    }
    r++;
    queue[r]=data;
    if(f==-1) {
        f=0;
    }
}

int dequeue() {
    if(f==-1) {
        printf("Queue Underflow\n");
        return 0;
    }
    int n=queue[f];
    if(f==r) {
        f=-1;
        r=-1;
    }
    else f++;
    return n;
}

void display() {
    if(f==-1) {
        printf("Queue is empty\n");
        return;
    }

    int i=f;
    while(i<=r) {
        printf("%d,  ", queue[i]);
        i++;
    }
    printf("\n");
}



int main() {

    int ans;
    enqueue(10);
    enqueue(30);
    enqueue(52);
    enqueue(80);
    ans = dequeue();
    printf("\ndequeued element is %d\n", ans);
    ans = dequeue();
    printf("\ndequeued element is %d\n", ans);
    enqueue(14);
    display();
    enqueue(8);
    enqueue(99);
    enqueue(15);
    display();

    return 0;
}