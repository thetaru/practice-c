#include <stdio.h>
#include <string.h>

struct _mydata_ {
    char buf[512];
    int len;
};

int func(struct _mydata_ *mydata)
{
    printf("func:sizeof(mydata)=%ld\n", sizeof(mydata));
    printf("func:mydata=%s,%d\n", mydata->buf, mydata->len);
    strcpy(mydata->buf, "func");
    mydata->len = strlen(mydata->buf);
    printf("func:mydata=%s,%d\n", mydata->buf, mydata->len);

    return 0;
}

int main()
{
    struct _mydata_ mydata;

    strcpy(mydata.buf, "main");
    mydata.len = strlen(mydata.buf);
    printf("main:mydata=%s,%d\n", mydata.buf, mydata.len);
    func(&mydata);
    printf("main:mydata=%s,%d\n", mydata.buf, mydata.len);

    return 0;
}