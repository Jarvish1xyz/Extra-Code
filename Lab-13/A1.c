#include<stdio.h>
#define size 5

int CQueue[size];
int f=-1, r=-1;

void enqueue(int data) {
    if(r==size-1) r=0;
    else r++;

    if(f==r) {
        printf("Circular Queue Overflow\n");
        r--;
        return;
    }
    CQueue[r]=data;
    if(f==-1) {
        f=0;
    }
}

int dequeue() {
    if(f==-1) {
        printf("Circular Queue Underflow\n");
        return 0;
    }
    int n=CQueue[f];
    if(f==r) {
        f=-1;
        r=-1;
    }
    if(f==size-1) {
        f=0;
    }
    else {
        f++;
    }
    return n;
}

void display() {
    if(f==-1) {
        printf("Circular Queue is empty\n");
        return;
    }
    int i=f;
    if(i<r) {
        while(i<=r) {
            printf("%d,  ", CQueue[i]);
            i++;
        }
    }
    else {
        while(i<size) {
            printf("%d,  ", CQueue[i]);
            i++;
        }
        i=0;
        while(i<=r) {
            printf("%d,  ", CQueue[i]);
            i++;
        }
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