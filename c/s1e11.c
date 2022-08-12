#include <stdio.h>

#define IM int  main()
#define MI      return 0;
#define BEGIN   {
#define END     }
#define IF      if(
#define THEN    ){
#define ELSE    }else{
#define ELIF    }else if(
#define FI      }

IM
BEGIN
    /*int i;

    printf("请输入你的年龄：");
    scanf("%d", &i);

    IF i < 18 THEN
        printf("您未满18周岁，不得使用这个程序！\n");
    ELSE
        printf("您已满18周岁，欢迎使用本程序，嘿嘿嘿...\n");
    FI*/

    char i;

    printf("请输入字母：");
    scanf("%c", &i);

    IF i >= 'A' && i <= 'Z' THEN
        i = i + 32; 
    ELIF i >= 'a' && i <= 'z' THEN
        i = i - 32;
    FI

    printf("%c\n", i);
MI
END
