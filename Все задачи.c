#define _CRT_SECURE_NO_DEPRECATE

#include <stdio.h>
#include <stdlib.h>

#define D 2.54
#define SPANISH_D 2.32166
#define OLD_LITHUANIAN_D 2.7076


// Задание 1
void task1()
{
    int num1;
    int num2;

    puts("========================================");
    puts("              ЗАДАНИЕ 1");
    puts("========================================");

    puts("Введите первое целое число:");
    scanf("%d", &num1);

    printf("Введено число %d\n", num1);

    puts("Введите второе целое число:");
    scanf("%d", &num2);

    printf("Введено число %d\n", num2);

    puts("");
    puts("Результаты вычислений:");

    printf("Сумма: %d + %d = %d\n",
        num1, num2, num1 + num2);

    printf("Разность: %d - %d = %d\n",
        num2, num1, num2 - num1);

    printf("Произведение: %d * %d = %d\n",
        num1, num2, num1 * num2);

    if (num1 != 0)
    {
        printf("Частное: %d / %d = %.2f\n",
            num2, num1, (float)num2 / num1);

        printf("Остаток от деления: %d %% %d = %d\n",
            num2, num1, num2 % num1);
    }
    else
    {
        puts("Деление на ноль невозможно.");
    }

    puts("");
}


// Задание 2
void task2()
{
    int dym;

    puts("========================================");
    puts("              ЗАДАНИЕ 2");
    puts("========================================");

    puts("Введите количество дюймов:");
    scanf("%d", &dym);

    puts("");

    printf("Английский дюйм:\n");
    printf("%d дюймов - это %.2f см\n",
        dym, D * dym);

    puts("");

    printf("Испанский дюйм:\n");
    printf("%d pulgada - это %.2f см\n",
        dym, SPANISH_D * dym);

    puts("");

    printf("Старолитовский дюйм:\n");
    printf("%d дюймов - это %.2f см\n",
        dym, OLD_LITHUANIAN_D * dym);

    puts("");
}


// Задание 3
void task3()
{
    float a;
    float b;

    puts("========================================");
    puts("              ЗАДАНИЕ 3");
    puts("========================================");

    printf("Введите число a: ");
    scanf("%f", &a);

    printf("Введите число b: ");
    scanf("%f", &b);

    puts("");

    printf("-------------------|-------------|-------------|-------------|\n");
    printf("                   |    a * b    |    a + b    |    a - b    |\n");
    printf("-------------------|-------------|-------------|-------------|\n");

    printf("                   | %5.2f * %-5.2f | %5.2f + %-5.2f | %5.2f - %-5.2f |\n",
        a, b, a, b, a, b);

    printf("-------------------|-------------|-------------|-------------|\n");

    printf("                   | %11.2f | %11.2f | %11.2f |\n",
        a * b,
        a + b,
        a - b);

    printf("-------------------|-------------|-------------|-------------|\n");

    system("pause");
}


int main()
{
    task1();

    task2();

    task3();

    return 0;
}