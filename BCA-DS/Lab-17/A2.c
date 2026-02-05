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

void deleteFirst() {

    if(first==NULL) {
        printf("List is empty\n");
        return;
    }

    struct node *temp = first;
    first = first->link;

    free(temp);
    size--;
}

void deleteLast() {
    if(first==NULL) {
        printf("List is empty\n");
        return;
    }

    if(first->link==NULL) {
        struct node *temp = first;
        first=NULL;
        free(temp);
    }

    struct node *ptr = first;
    while((ptr->link)->link!=NULL) {
        ptr = ptr->link;
    }

    struct node* temp = ptr->link;
    ptr->link=NULL;
    free(temp);
    size--;
}

void deleteAtLocation(int N) {
    printf("\n size:%d N:%d", size, N);
        
    if (N <= 0 || N > size) {
        printf("invalid position");
        return;
    }

    struct node *temp;

    if (N == 1) {
        temp=first;
        first = first->link;
        free(temp);
        return;
    }

    
    struct node *ptr = first;

    for (int i = 1; i < N - 1; i++) {
        ptr = ptr->link;
    }

    temp=ptr->link;
    ptr->link=(ptr->link)->link;
    free(temp);

    size--;
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
        printf("\n Enter 3 for Delete from First");
        printf("\n Enter 4 for Delete from Last");
        printf("\n Enter 5 for Delete at Location");
        printf("\n Enter 6 for Display");
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
                deleteFirst();
                break;
            case 4:
                deleteLast();
                break;
            case 5:
                printf("\nEnter the location:\n");  
                scanf("%d",&loc);
                deleteAtLocation(loc);
                break;
            case 6:
                display();
                break;
            default:
                printf("You entered wronge choice!!!\n");
        }
        display();
    }
    return 0;
}