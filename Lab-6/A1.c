#include<stdio.h>

struct book {
    char bookName[50];
    char authorName[50];
    char publicationName[50];
    int price;
};

int main() {
    int n;
    printf("Enter number of books : ");
    scanf("%d", &n);

    struct book b[n];
    for(int i=0; i<n; i++) {
        printf("\nEnter deail of book-%d\n", (i+1));
        printf("Enter Book name : ");
        scanf(" %[^\n]", b[i].bookName);
        printf("Enter Author name : ");
        scanf(" %[^\n]", b[i].authorName);
        printf("Enter Publication name : ");
        scanf(" %[^\n]", b[i].publicationName);
        printf("Enter book price : ");
        scanf("%d", &b[i].price);
    }

    printf("\n**List of Books**\n\n");
    for(int i=0; i<n; i++) {
        printf("------------------Book-%d------------------\n", (i+1));
        printf("Book Name:              %s\n", b[i].bookName);
        printf("Book Author Name:       %s\n", b[i].authorName);
        printf("Book Publication Name:  %s\n", b[i].publicationName);
        printf("Book price:             %d\n", b[i].price);
    }
}