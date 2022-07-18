#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    float f;
    short s;
    int   i;

    while (1) {
        scanf("%g", &f);
        memcpy(&s, &f, sizeof(s));
        for (i = 0; i < 16; i++) {
            printf("%d", (s>>i)&0x01);
        }
        printf("\n");
    }
    return 0;
}