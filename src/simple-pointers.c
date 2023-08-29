#include <stdio.h>

int * gpi = 0;

int main(int argc, char ** argv) {
    int i = 9;
    int *pi = &i;
    //printf("i = %d", *pi++);
    printf("i = %d", (*pi)++);
    printf("i = %d", (*pi)++);
    printf("i = %d", ++*gpi);
    printf("i = %d", *(++gpi));

    return 0;
}
