#include <stdio.h>

int main()
{
    /* 第一题
    int a;
    int b;

    b = 3;
    a = b;
    b = b*2;

    printf("%d\n",a);
    printf("%d\n",b);
    */

    /* 第二题
    int r;
    float c;
    float s;

    r = 5;
    c = 2*3.14*r;
    s = 3.14*r*r;

    printf("半径为%d的圆，周长是%.2f，面积是%.2f\n",r,c,s);
    */

    printf("打印五个字符：%c %c %c %c %c\n", 70, 105, 115, 104, 67);
    printf("前边用 填充：%10d\n", 2015);
    printf("前边用0填充：%010d\n", 2015);
    printf("右对齐，保留2位：%10.2f\n", 3.1416);
    printf("左对齐，保留3位：%-10.3f\n", 3.1416);
    printf("右对齐，指数形式：%10e\n", 520000.0);
    printf("左对齐，指数形式：%-10E\n", 520000.0);

    return 0;
}