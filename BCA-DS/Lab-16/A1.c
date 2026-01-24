// #include<stdio.h>
// #include<stdlib.h>

// struct node {
//     int info;
//     struct node *link;
// };

// struct node* first = NULL;

// struct node* createNode(int data) {
//     struct node* newNode = (struct node*)malloc(sizeof(struct node));

//     newNode->info = data;
//     newNode->link = NULL;
//     return newNode;
// }

// void insertAtFirst(int data) {
//     struct node* newNode = createNode(data);

//     newNode->link = first;
//     first = newNode;
// }

// void deleteFirst() {
//     if (first == NULL) {
//         printf("List is empty\n");
//     }
//     else {
//         struct node* save=first;
//         first=save->link;
//         free(save);
//     }
// }

// void insertAtLast(int x) {
//     struct node* newNode = (struct node*)malloc(sizeof(struct node));
//     struct node* save = first;

//     if(first==NULL) {
//         first=newNode;
//     }
//     else {
//         while(save->link!=NULL) {
//             save=save->link;
//         }
//         save->link=newNode;
//     }
//     newNode->info=x;
//     newNode->link=NULL;
// }

// void deleteLast() {
//     if(first==NULL) {
//         printf("List is empty\n");
//     }
//     else {
//         struct node*save=first;
//         while((save->link)->link!=NULL) {
//             save=save->link;
//         }
//         free(save->link);
//         save->link=NULL;
//     }
// }

// void deleteSpecific(int pos) {
//     if(first==NULL) {
//         printf("List is empty\n");
//     }
//     else {
//         struct node*save=first;
//         for(int i=1; i<pos-1; i++) {
//             save=save->link;
//         }
//         save->link=(save->link)->link;
//         free(save->link);
//     }
// }

// void display() {
//     struct node* save = first;
//     while(save!=NULL) {
//         printf("%d ", save->info);
//         save=save->link;
//     }
// }

// void countNodes(){
//     int count=0;
//     struct node* save = first;
//     while(save!=NULL) {
//         save=save->link;
//         count++;
//     }

//     printf("Number of nodes: %d\n", count);
// }

// int main() {
    
//     insertAtFirst(10);
//     insertAtFirst(10);
//     insertAtFirst(10);
    
//     display();
    
//     return 0;
// }

#include<stdio.h>
#include<stdlib.h>

struct node {
    int info;
    struct node* link;
};

struct node* createNode(int data) {
    struct node* newNode = (struct node*)malloc(sizeof(struct node*));

    newNode->info = data;
    return newNode;
}

void insertAtFirst(struct node** head, int data) {
    struct node* newNode = createNode(data);

    if(*head==NULL) {
        *head=newNode;
        return;
    }

    newNode->link=*head;
    *head=newNode;
}

void display(struct node** head) {
    struct node* save=*head;

    while(save!=NULL) {
        printf("%d, ", save->info);
        save=save->link;
    }
}

int main() {
    struct node* head=NULL;

    insertAtFirst(&head, 10);
    insertAtFirst(&head, 10);
    insertAtFirst(&head, 10);

    display(&head);

    return 0;
}