
#include <stdio.h>
#include <stdlib.h>

/*
 * 関数の実装 - ShortBinPrint, ShortToBinString()
 */
short GetShort()
{
    char buf[80];
    short num;

    fgets(buf, sizeof(buf)-1, stdin);
    num = (short)atoi(buf);

    return num;
}

int ShortToBinString(short num, char *buf)
{
    int i;
    char *ptr;

    ptr = buf;
    for(i = 15; i >= 0; i--) {
        *ptr = (char)(((num>>i)&0x01)+'0');
        ptr++;
    }
    *ptr = '\0';

    return 0;
}

int ShortBinPrint(short num)
{
    char buf[20];

    ShortToBinString(num, buf);

    printf("%s\n", buf);

    return 0;
}

int main()
{
    short num;

    while(1) {
        /* shortを標準入力から得て、numに格納 */
        num = GetShort();
        /* numを2進数表示 */
        ShortBinPrint(num);
    }
    return 0;
}