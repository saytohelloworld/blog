#include <stdio.h>

int main()
{
    /*int i, num;
    _Bool flag = 1;

    printf("请输入数字：");
    scanf("%d", &num);

    for (i = 2; i < num / 2; i++)
    {
        if (num % i == 0) {
            flag = 0;
        }
    }

    if (flag)
    {
        printf("%d是一个素数。\n", num);
    }
    else
    {
        printf("%d不是一个素数。\n", num);
    }*/

    /*int i, j;

    for (i = 1; i <= 9; i++)
    {
        for ( j = 1; j <= i; j++)
        {
            printf("%d*%d=%-2d  ", i, j, i * j);
        }
        putchar('\n');
    }*/

    /*
    int i, num, price;

    printf("公斤 -- 花费（元）：\n");

    for (i = 1, price = 23; i <= 20; i++, price += 14)
    {
        printf("%4d -- %3d\n", i, price);
    }
    */

    /*
    float num = 0;
    double sum = 0L;
    int status;

    // do
    // {
    //     printf("请输入合法的数字：");
    //     sum = sum + num;
    //     status = scanf("%d", &num);
    // } while (status);

    do
    {
        printf("请输入合法的数字：");
        do
        {
            sum = sum + num;
            status = scanf("%f", &num);
        } while (getchar() != '\n' && status == 1);
    } while (status == 1);

    printf("结果是：%.2lf\n", sum);
    */

    
    int i, j, k;
    
    for (i = 1; i <= 9; i++)
    {
        for (j = 1; j <= 9; j++)
        {
            /*
            if (i <= j)
            {
                printf("%d*%d=%-2d  ", i, j, i * j);
            }
            */

            /*
            if (j < i)
            {
                printf("        ");
            }
            else
            {
                printf("%d*%d=%-2d  ", i, j, i * j);
            }
            */
        }

        for (k = 1; k <= 9-i; k++)
        {
            printf("        ");
        }

        for (j = 1; j <= i; j++)
        {
            printf("%d*%d=%-2d  ", i, j, i * j);
        }
        putchar('\n');
    }
    



    return 0;
}