#include <stdio.h>
#include <clocale>
#include <cmath>
const double pi = 3.14159265359;

int main()
{
    setlocale(LC_ALL, "RU");
    double a, b, x;
    printf("Input a: ");
    scanf("%lf", &a);
    printf("Input b: ");
    scanf("%lf", &b);
    printf("Input x: ");
    scanf("%lf", &x);
    double part1 = exp(-2*a);
    double valSin = sin(2 * pi * x);
    double part2 = valSin * valSin;
    double answer = b * part1 * part2;
    printf("Answer y: %lf\n", answer);
    return 0;
}
