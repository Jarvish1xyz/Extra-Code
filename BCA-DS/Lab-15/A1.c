#include<stdio.h>
#include<stdlib.h>

int main() {
    int *i = (int*)malloc(sizeof(int));
    float *f = (float*)malloc(sizeof(float));
    char *c = (char*)malloc(sizeof(char));

    *i=10;
    *f=10.5;
    *c='d';

    printf("%d", *i);
    printf("%f", *f);
    printf("%c", *c);

    free(i);
    free(f);
    free(c);

    return 0;
}