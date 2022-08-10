#include <stdio.h>
#include <math.h>

int main()
{
    /*
    signed char i;
    unsigned char j;

    i = 255;
    j = 255;

    printf("i 的值是 %hhd\n", i);
    printf("j 的值是 %hhu\n", j);
    */

    int i;

    printf("请输入一个整数：");
    scanf("%d", &i);

    printf("%d的五次方是%.2f\n", i,pow(i,5));

    return 0;
}