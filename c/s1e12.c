#include <stdio.h>
// #include <stdbool.h>
#include <Servo.h>

#define LEFT_MOTO_GO 8
#define LEFT_MOTO_BACK 9
#define RIGHT_MOTO_GO 10
#define RIGHT_MOTO_BACK 11

int main()
{
    /*
    float i, j, result;
    char a;
    bool b = false;

    printf("请输入式子：");
    scanf("%f %c %f", &i, &a, &j);

    switch (a)
    {
        case '/':
            if (j != 0)
            {
                result = i / j;
                break;
            }
            else
            {
                b = true;
                break;
            }
        case '*':
            result = i * j;
            break;
        case '-':
            result = -j;
        case '+':
            result = i + j;
            break;
    }

    if (b)
    {
        printf("除数不能为零！\n");
    }
    else
    {
        printf("结果是：%.2f\n", result);
    }
    */

    return 0;
}

void loop()
{
    char ch;

    switch(ch)
    {
        case 'g':
            digitalWrite(8, HIGH);
            digitalWrite(9, LOW);
            digitalWrite(10, HIGH);
            digitalWrite(11, LOW);
            break;
        case 'b':
            digitalWrite(9, HIGH);
            digitalWrite(8, LOW);
            digitalWrite(11, HIGH);
            digitalWrite(10, LOW);
            break;
        case 'r':
            digitalWrite(8, HIGH);
            digitalWrite(9, LOW);
            digitalWrite(11, LOW);
            digitalWrite(10, LOW);
            break;
        case 'l':
            digitalWrite(9, HIGH);
            digitalWrite(8, LOW);
            digitalWrite(11, LOW);
            digitalWrite(10, LOW);
            break;
        default:
            digitalWrite(8, LOW);
            digitalWrite(9, LOW);
            digitalWrite(10, LOW);
            digitalWrite(11, LOW);
            break;
    }
}