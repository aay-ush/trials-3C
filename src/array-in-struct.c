#include <stdio.h>

struct table {
    int nums[3];
    char lits[16];
};

/*
3C converts it to checked array ptr with count 3:
    void f4(_Array_ptr<int> pInt : count(3)) {

After adding array a in main with size 5:
    void f4(_Array_ptr<int> pInt : count(5)) {

Fair, since normally size would be passed anyway and using wider bounds generates a compiler error.
*/
void f4(int *pInt) {
    printf("f4\n");
    printf("*pInt = %d\n", *pInt);
    printf("*(pInt + 1) = %d\n", *(pInt + 1));
}

void g4(char *pChar) {
    printf("g4\n");
    printf("*pChar = %c\n", *pChar);
    printf("*(pChar + 1) = %c\n", *(pChar + 1));
}

void h1(struct table *pTable) {
    printf("h1\n");
    f4(pTable->nums);
    g4(pTable->lits);
}

void init(struct table *pTable) {
    printf("init");
    for(int i = 0; i != 3; i++) {
        pTable->nums[i] = i;
    }
    for(int i = 0; i != 16; i++) {
        pTable->lits[i] = i;
    }
}

int main() {

    struct table t;
    init(&t);
    printf("h1(&t):\n");
    h1(&t);
    printf("f4(int*&t):\n");
    // 3c uses unknown bounds:
    //  f4(_Assume_bounds_cast<_Array_ptr<int>>((int*)&t, bounds(unknown)));
    f4((int*)&t);
    printf("f4(char*&t + 4):\n");
    // 3c uses unknown bounds:
    //  g4(_Assume_bounds_cast<_Array_ptr<char>>((char*)&t + 4, bounds(unknown)));
    g4((char*)&t + 4);

    int a [] = {1, 2, 3, 4, 5};
    printf("f4(a):\n");
    f4(a);

    return 0;
}
