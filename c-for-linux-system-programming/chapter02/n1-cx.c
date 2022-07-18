#include <stdio.h>

struct _test1_ {
    char a;
    int b;
    char c;
};

struct _test2_ {
    char a;
    char c;
    int b;
};

int main()
{
    /* 境界合わせにより同じメンバーを持つ構造体でもサイズが異なる例 */
    printf("sizeof(struct _test1_)=%d\n", sizeof(struct _test1_)); // 12byte(処理系依存)
    printf("sizeof(struct _test2_)=%d\n", sizeof(struct _test2_)); // 8byte(処理系依存)

    return 0;
}