#include <stdio.h>
#include <string.h>

struct _mydata_ {
    int a;
    double b;
    float c;
    char d;
    char buf[512];
};

int print_mydata(struct _mydata_ *mydata)
{
    printf("mydata->a=%d\n", mydata->a);
    printf("mydata->b=%f\n", mydata->b);
    printf("mydata->c=%lf\n", mydata->c);
    printf("mydata->d=%c\n", mydata->d);
    printf("mydata->buf=%s\n", mydata->buf);

    return 0;
}

int main()
{

    struct _mydata_ d1 = {1, 1.0, 1.0, '1', "1"};
    struct _mydata_ d2;

    /* 代入 */
    d2 = d1;

    /* メモリコピー */
    memcpy(&d1, &d2, sizeof(struct _mydata_));

    /* 値の出力 */
    printf("コピー元構造体のメンバー変数\n");
    print_mydata(&d1);
    printf("\n");
    printf("コピー先構造体のメンバー変数\n");
    print_mydata(&d2);

    return 0;
}