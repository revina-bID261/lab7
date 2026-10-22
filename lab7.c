#define  _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>


int e1(void)
{
    setlocale(LC_ALL, "ru_RU.UTF-8");
    char c;

    printf("Введите любой символ: ");
    scanf("%c", &c);
    if (c >= '0' && c <= '9')
    {
        printf("Это цифра\n");
    }
    else if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    {
        printf("Это буква\n");
    }
    else
    {
        printf("Неизвестный символ\n");
    }

    return 0;
}
int e2(void)
{
    float x = 0;
    float y = 0;
    char c;
    printf("Введите выражение: ");
    scanf("%f %c %f", &x, &c, &y);

    switch (c)
    {
    case '+':
        printf("= %f\n", x + y);
        break;

    case '-':
        printf("= %f\n", x - y);
        break;

    case '*':
        printf("= %f\n", x * y);
        break;

    case '/':
        if (y == 0)
        {
            printf("Ошибка.\n");
        }
        else
        {
            printf("= %f\n", x / y);
        }
        break;

    case '%':
        printf("= %d\n", (int)x % (int)y);
        break;
    }

    return 0;
}

int e3(void)
{
    int grade = 0;

    printf("Введите школьную оценку (от 1 до 5): ");
    scanf("%d", &grade);
    switch (grade)
    {
    case 1:
        printf("плохо\n");
        break;
    case 2:
        printf("неудовлетворительно\n");
        break;
    case 3:
        printf("посредственно\n");
        break;
    case 4:
        printf("хорошо\n");
        break;
    case 5:
        printf("отлично\n");
        break;
    default:
        printf("Ошибка\n");
        break;
    }
    return 0;
}



int main(void)
{
  //e1();
  //e2();
    e3();
}