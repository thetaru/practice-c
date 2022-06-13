#include <stdio.h>

/*
 * コメントの関数化
 *   言葉を関数に置き換える
 *   はじめに、適当な名前を付けた関数を作る
 */

short GetShort()
{
    return 0;
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