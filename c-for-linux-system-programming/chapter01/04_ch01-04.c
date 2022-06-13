#include <stdio.h>

/*
 * 関数の実装 - GetShort()
 */
short GetShort()
{
    char buf[80];
    short num;

    fgets(buf, sizeof(buf)-1, stdin);
    num = (short)atoi(buf);

    return num;
}

int ShortBinPrint(short num)
{
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