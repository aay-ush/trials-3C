#include <stdio.h>

typedef int A;
typedef int B;

//void f(void *pi) {
void f(_Itype_for_any(T) void *pi) {
    A *pA = (A*) pi;
    printf("f(): void* -> A* : *pA = %d\n", *pA);
}

void g1(void *pi) {
    B *pB = (B*) pi;
    printf("g(): void* -> B* : *pB = %d\n", *pB);
}

int main() {
    int i = 1;
    printf("i = %d\n", i);
    f((void*) &i);
    g1((void*) &i);

    return 0;
}

