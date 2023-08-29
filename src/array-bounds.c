#include <stdio.h>
/*
//#include "lib.h"
_Array_ptr<int> f3(_Array_ptr<int> x : count(3), int arr) : count(3)_Checked {
    _Array_ptr<int> r : count(3) = x+1;
    //*(r+3) = *r + 1;
    return r;
}
int main() _Checked {
//  int a = 10;
//  printf("%d",f3(&a));
    _Array_ptr<int> x : count(3) = ((void *)0);
    _Array_ptr<int> y : count(3) = ((void *)0);
    _Array_ptr<int> z : count(3) = ((void *)0);
    _Ptr<int> k = ((void *)0);
    int a _Checked[] = {1,2,3};
    //x = f3(a, 1);
    x = a;
    y = x+1;
    z = y+1;
    //k = z+1;
    x = f3(x, 1);
    y = f3(y, 1);
    z = f3(z, 1);
    //k = f3(k, 1);
    _Unchecked { printf("%d%d%d\n", *x,*y,*z); };
    int b = 5;
    //x = f3(&b, 0);
    _Unchecked { printf("%d\n", *x); };
    _Unchecked { printf("all ok\n"); };
    return 0;
}
*/
#include <stdio.h>
int main() {
/*
    int a _Checked [3] = {1, 2, 3};
    printf("4th: %d", a[4]);
*/
    int a _Checked[3];
    for(int i = 0; i < 4; i++) {
        a[i] = i;
    }
    for(int i = 0; i < 4; i++) {
        printf("a[%d] = %d", i, i);
    }
    return 0;
}
