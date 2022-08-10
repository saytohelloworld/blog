#include <stdio.h>

#define NL '\n'

#define PI 3.14159
#define S(r) PI*r*r
#define C(r) 2*PI*r

#define JING        0.5
#define FANQIE      3.7
#define GAILAN      7
#define XIQIN       1.3
#define KONGXINCAI  8
#define YANGCONG    2.4
#define YOUCAI      9
#define HUANGGUA    6.3
#define BAILUOBO    0.5

int main()
{
    /* 第一题
    printf("Line1%c", NL);
    printf("Line2%c", NL);
    */

    /* 第二题
    int r = 5;

    printf("半径为%d的圆，面积是：%.2f，周长是：%.2f\n", r, S(r), C(r));
    */

    /* 第三题
    float xiaoming = 2*JING*FANQIE + 1*JING*KONGXINCAI + 1*JING*YOUCAI;
    float xiaohong = 3*JING*XIQIN + 0.5*JING*YANGCONG + 5*JING*HUANGGUA;
    float fishc = 10*JING*HUANGGUA + 20*JING*BAILUOBO;

    printf("小明需要支付%.2f元\n", xiaoming);
    printf("小红需要支付%.2f元\n", xiaohong);
    printf("小甲鱼需要支付%.2f元\n", fishc);
    */

    // 第三题答案
    float price;

    price = (2 * FANQIE + 1 * KONGXINCAI + YOUCAI) * 0.5;
    printf("小明需要支付%.2f元\n", price);

    price = (3 * XIQIN + 0.5 * YANGCONG + 5 * HUANGGUA) * 0.5;
    printf("小红需要支付%.2f元\n", price);

    price = (10 * HUANGGUA + 20 * BAILUOBO) * 0.5;
    printf("小甲鱼需要支付%.2f元\n", price);

    return 0;
}