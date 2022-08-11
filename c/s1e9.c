#include <stdio.h>
#include <math.h>

int main()
{
    /*float fah, cel;

    printf("请输入摄氏温度：");
    scanf("%f", &cel);

    fah = 9.0 / 5.0 * cel + 32;
    printf("转换为华摄氏温度是：%.2f\n", fah);*/

    /*
    float price, area, yir, mir;    // 单价、面积、年利息、月利润
    float interest, loan;           // 利息、货款总额
    float ave_repay, down_payment;  // 月均还款、首期付款
    float total_price, total_repay; // 房款总额、还款总额
    int ratio, time;                // 按揭成数、按揭年数

    printf("请输入单价（元/平方）：");
    scanf("%f", &price);
    printf("请输入面积：");
    scanf("%f", &area);
    printf("请输入按揭成数：");
    scanf("%d", &ratio);
    printf("请输入按揭年数：");
    scanf("%d", &time);
    printf("请输入当前基准年利息：");
    scanf("%f", &yir);

    total_price = price * area;

    printf("========== 报告结果 ==========\n");
    printf("房款总额：%.2f元\n", total_price);
    printf("首期付款：%.2f元\n", down_payment);
    printf("货款总额：%.2f元\n", loan);
    printf("还款总额：%.2f元\n", total_repay);
    printf("支付利息：%.2f元\n", interest);
    printf("月均还款：%.2f元\n", ave_repay);
    */

    /*
    int price;
    float result;

    price = 10000;

    result = price * (1 + 2.75 * 5);
    printf("一次性定期存5年的本息和是：%.2f\n", result);

    result = (price * (1 + 2.75 * 3)) * (1 + 2.25 * 5);
    printf("先存3年，到期后本息再存2年定期的本息和是：%.2f\n", result);

    result = (price * (1 + 1.75)) * pow((1 + 1.75),5);
    printf("存1年定期，到期后本息再存1年定期，连续存5次的本息和是：%.2f\n", result);
    */

    float p0 = 10000, p1, p2, p3;
    float r1 = 0.0175, r2 = 0.0225, r3 = 0.0275, r5 = 0.0275;

    p1 = p0 * (1 + r5 * 5);
    p2 = p0 * (1 + r3 * 3) * (1 + r2 * 2);
    p3 = p0 * pow((1 + r1), 5);

    printf("第一种方案的本息和是：%.2f\n", p1);
    printf("第二种方案的本息和是：%.2f\n", p2);
    printf("第三种方案的本息和是：%.2f\n", p3);

    return 0;
}