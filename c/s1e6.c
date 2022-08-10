#include <stdio.h>
#include <math.h>

int main()
{
    /*printf("int = %d\n", sizeof(int));
    printf("short int = %d\n", sizeof(short));
    printf("long int = %d\n", sizeof(long));
    printf("long long int = %d\n", sizeof(long long));
    printf("char = %d\n", sizeof(char));
    printf("_Bool = %d\n", sizeof(_Bool));
    printf("float = %d\n", sizeof(float));
    printf("double = %d\n", sizeof(double));
    printf("long double = %d\n", sizeof(long double));*/

    /*short i;
    unsigned short j;

    i = -1;
    j = -1;

    printf("%d\n", i); // -1
    printf("%u\n", j); // 65535 */

    /* 第一题
    int result;
 
    result = pow(1,2) + pow(2,3) + pow(3,4) + pow(4,5) + pow(5,6);

    printf("%d\n", result);
    */

    /* 第二题
    int i;
    int sum;
    int temp;
    int weight;

    for (i=0; i < 64; i++)
    {
        temp = pow(2,i);
        sum = sum + temp;
    }

    weight = sum / 25000;

    printf("舍罕王应该给予达依尔%d粒麦子！\n", sum);
    printf("如果每25000粒麦子为1kg，那么应该给%d公斤麦子！\n", weight);
    */

    // 第二题改正
    unsigned long long sum = 0;
    unsigned long long temp;
    unsigned long long weight;

    int i;

    for (i=0; i < 64; i++)
    {
        temp = pow(2,i);
        sum = sum + temp;
    }

    weight = sum / 25000;

    printf("舍罕王应该给予达依尔%llu粒麦子！\n", sum);
    printf("如果每25000粒麦子为1kg，那么应该给%llu公斤麦子！\n", weight);

    return 0;
}