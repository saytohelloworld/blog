#include <stdio.h>

int main()
{
    /*while(1)
            ;*/

    /*char ch;

    while ((ch = getchar()) == ' ')
            ;*/

    /*
    int num = 0;
    int ch;

    printf("请输入一行英文句子：");
    while((ch = getchar()) != '\n')
    {
        if (ch >= 65 && ch <= 90)
        {
            num = num + 1;
        }
    }

    printf("你总共输入了%d个大写字母\n", num);
    */

    /*
    int ch;

    printf("请输入一行英文句子：");
    while ((ch = getchar()) != '\n')
    {
        if (ch >= 'A' && ch <= 'Z')
        {
            ch = ch + 32;
        }
        else if (ch >= 'a' && ch <= 'z')
        {
            ch = ch - 32;
        }
        putchar(ch);
    }

    putchar('\n');
    */

    int ch, i = 0;

    printf("请输入待转型的字符串：");
    do
    {
        ch = getchar();

        if (ch >= '0' && ch <= '9')
        {
            // https://fishc.com.cn/thread-206495-1-1.html
            // 这个 10 * 1 真的太折腾了，终于是知道为啥了
            i = 10 * i + (ch - '0');
            printf("%d\n", i);
        }
        else if (i)
        {
            break;
        }
    }
    while(ch != '\n');

    printf("结果是：%d\n", i);

    return 0;
}