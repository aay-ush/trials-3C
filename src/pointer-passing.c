#include <stdio.h>

int * gpi = 0;

void f(int *pi) {
    gpi = pi;
}

void g(int **ppi) {
    gpi = *ppi;
}

int main() {
    int i = 1;
    printf("i = %d", i);
    printf("*gpi = %d", *gpi);
    f(&i);
    printf("After f: *gpi = %d;\ti = %d", *gpi, i);
    int *pi = &i;
    g(&pi);
    printf("After g: *gpi = %d;\ti = %d", *gpi, i);

    return 0;
}

