#include <stdio.h>

int main()
{
    short num; // 16bit
    int i;

    while(1) {
        printf("Input = ");
        fflush(stdout);
        scanf("%hd", &num);
        for(i = 15; i >= 0; i--) {
            printf("%d", (num>>i)&0x01);
        }
        printf("\n");
    }

    return 0;
}