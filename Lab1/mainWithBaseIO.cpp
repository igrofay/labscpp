#include <stdio.h>
#include <clocale>

const double pi = 3.14159265359;

int main()
{
    setlocale(LC_ALL, "RU");
    double radius, height;
    printf("Вычисление площади поверхности цилиндра.\n");
    printf("Введите исходные данные:\n");
    printf("Радиус основания (см) -> ");
    scanf("%lf", &radius);
    printf("Высота цилиндра (см) -> ");
    scanf("%lf", &height);
    double area = 2 * pi * radius * (height + radius);
    char answer[512];
    snprintf(answer,
             sizeof(answer),
             "Площадь поверхности цилиндра: %.2f кв.см", area
             );
    printf("\n%s\n", answer);
    return 0;
}
