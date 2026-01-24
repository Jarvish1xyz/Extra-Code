#include<stdio.h>
#include<stdlib.h>

struct student {
    int rollNo;
    char name[10];
    char branch[10];
    int batch;
};

int main() {
    struct student s1;
    struct student *s=&s1;


    printf("Enter roll no. : ");
    scanf("%d", &s->rollNo);

    printf("Enter your name : ");
    scanf("%s", s->name);
    
    printf("Enter brach name: ");
    scanf("%s", s->branch);
    
    printf("Enter batch no. : ");
    scanf("%d", &s->batch);
    
    printf("Entered roll no. : %d\n", s->rollNo);
    printf("Entered name : %s\n", s->name);
    printf("Enterde branch name : %s\n", s->branch);
    printf("Entered batch no. : %d\n", s->batch);

    return 0;

}