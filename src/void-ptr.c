#include <stdio.h>

typedef int A;
typedef int B;

//void f2(void *pi) {
void f2(_Itype_for_any(T) void *pi) {
    A *pA = (A*) pi;
    printf("f(): void* -> A* : *pA = %d\n", *pA);
}

void g2(void *pi) {
    B *pB = (B*) pi;
    printf("g(): void* -> B* : *pB = %d\n", *pB);
}

int main() {
    int i = 1;
    printf("i = %d\n", i);
    f2((void*) &i);
    g2((void*) &i);

    return 0;
}

