#include <stdio.h>
#include <stdlib.h>

int size = 0;

struct node {
    int info;
    struct node *link;
};

struct node *first = NULL;

void insertAtFirst(int data) {
    struct node *avail, *newNode;
    avail = (struct node *)malloc(sizeof(struct node));

    if (avail == NULL) {
        printf("Unable to allocate memory.");
        return;
    }

    newNode = avail;
    avail = avail->link;

    newNode->info = data;

    if (first == NULL) {
        newNode->link = NULL;
    }

    else {
        newNode->link = first;
    }

    first = newNode;
    size++;
    printf("DATA INSERTED SUCCESSFULLY\n");
}

void insertAtLocation(int value, int N) {
    printf("\n size:%d N:%d", size, N);
    struct node *avail, *newNode;
    avail = (struct node *)malloc(sizeof(struct node));

    if (avail == NULL) {
        printf("\nUnable to allocate memory.");
        return;
    }
        
    if (N <= 0 || N > size) {
        printf("invalid position");
        return;
    }

    if (N == 1) {
        newNode->link = first;
        first = newNode;
        return;
    }

    newNode = avail;
    avail = avail->link;

    newNode->info = value;

    struct node *ptr = first;

    for (int i = 1; i < N - 1; i++) {
        ptr = ptr->link;
    }

    newNode->link = ptr->link;
    ptr->link = newNode;
    
    printf("\nNode inserted successfully!!");
    size++;
    return;
}

void display() {

    if (first == NULL) {
        printf("List is empty.");
        return;
    }
    struct node *ptr = first;

    printf("\n --------- Data in Linked list --------- \n");
    while (ptr != NULL) {
        printf("%d ->", ptr->info);
        ptr = ptr->link;
    }

    printf("\n------ TOTAL NODES: %d -------\n ", size);
    printf("\n ----------------------- \n");
}

void insertAtEnd(int value) {
    struct node *avail, *newNode;
    avail = (struct node *)malloc(sizeof(struct node));

    if (avail == NULL) {
        printf("\nUnable to allocate memory.");
        return;
    }

    newNode = avail;
    avail = avail->link;

    newNode->info = value;
    newNode->link = NULL;

    if (first == NULL) {
        first = newNode;
        printf("\nNode inserted successfully!!");
        return;
    }
    
    struct node *ptr = first;
    while (ptr->link != NULL) {
        ptr = ptr->link;
    }
    ptr->link = newNode;

    printf("\nNode inserted successfully!!");

    size++;
}

int main() {
    int i, choice = 5, value, loc;
    while (choice != 0) {
        printf("\n Enter 1 for Insert at Beginning");
        printf("\n Enter 2 for Insert at End");
        printf("\n Enter 3 for Insert at Location");
        printf("\n Enter 4 for Display");
        printf("\n Enter -1 for Exit");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("ENter value");
                scanf("%d", &value);
                insertAtFirst(value);
                break;
            case 2:
                printf("ENter value");
                scanf("%d", &value);
                insertAtEnd(value);
                break;
            case 3:
                printf("\nEnter the location:\n");  
                scanf("%d",&loc); 
                printf("ENter value");
                scanf("%d",&value);
                insertAtLocation(value,loc);
                break;
            case 4:
                display();
                break;
            default:
                printf("You entered wronge choice!!!\n");
        }
        display();
    }
    return 0;
}