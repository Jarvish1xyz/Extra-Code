#include<stdio.h>
#include<stdlib.h>

struct student {
    int roll;
    char name[10];
};


int main() {
    struct student s1;
    struct student *s = (struct student*)malloc(3*sizeof(struct student));
    
    for(int i=0; i<3; i++) {
        printf("Enter detaik of student %d:-\n", i+1);
        printf("Enter roll no: ");
        scanf("%d", &((s+i)->roll));

        printf("Enter name: ");
        scanf("%s", ((s+i)->name));
    }

    for(int i=0; i<3; i++) {
        printf("%d - ", (s+i)->roll);
        printf("%s\n", (s+i)->name);
    }

    return 0;
}