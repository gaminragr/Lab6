#include <stdio.h>
#include <locale.h>

int task1()
{
    int year;

    printf("Введите год: ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) 
    {
        printf("Год %d високосный\n", year);
    } 
    else 
    {
        printf("Год %d не високосный\n", year);
    }

    return 0;
}
int task2()
{
    double x, F;

    printf("Введите x: ");
    scanf("%lf", &x);

    F = (x <= 7) ? (-3 * x + 9) : (1.0 / (x - 7));

    printf("F(%.2f) = %.2f\n", x, F);

    return 0;
}
int task3()
{
    int birthYear, currentYear, age;

    printf("Введите год рождения: ");
    scanf("%d", &birthYear);

    printf("Введите текущий год: ");
    scanf("%d", &currentYear);

    age = currentYear - birthYear;

    printf("Ваш полный возраст: %d ", age);

    if (age % 10 == 1 && age % 100 != 11) 
    {
        printf("год\n");
    } 
    else if (age % 10 >= 2 && age % 10 <= 4 && (age % 100 < 12 || age % 100 > 14)) 
    {
        printf("года\n");
    } 
    else 
    {
        printf("лет\n");
    }

    return 0;
}

int main()
{
    setlocale(LC_ALL, "RUS");
    task1(); task2(); task3();
} 