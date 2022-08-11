#include <stdio.h>

int main()
{
    /*
    float f, result;

    printf("请输入华摄氏温度：");
    scanf("%f", &f);

    result = (f - 32) * 5 / 9;

    printf("转换为摄氏温度是：%.2f\n", result);
    */

    char name;
    float height, weight;   

    printf("请输入您的姓名：");
    scanf("%c", &name);

    printf("请输入您的身高 (cm)：");
    scanf("%f", &height);

    printf("请输入您的体重 (kg)：");
    scanf("%f", &weight);

    height = height * 0.3937;
    weight = weight * 2.20462262;

    printf("===== 正在为您转换 =====\n");
    printf("%c的身高是 %.2f (in)，体重是 %.2f (lb)。\n", name, height, weight);

    return 0;
}