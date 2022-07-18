#include <stdio.h>

int main()
{
    union {
        char   c;
        int    i;
        float  f;
        double d;
    } test;

    printf("sizeof(test)=%d\n", sizeof(test));
    printf("&test.c=%x\n", &test.c);
    printf("&test.i=%x\n", &test.i);
    printf("&test.f=%x\n", &test.f);
    printf("&test.d=%x\n", &test.d);

    return 0;
}