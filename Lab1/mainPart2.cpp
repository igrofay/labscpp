#include <iostream>
#include <format>

const double pi = 3.14159265359;

using namespace std;

int main(){
    setlocale(LC_ALL, "RU");
    double radius, height;
    cout << "Вычисление площади поверхности цилиндра." << endl;
    cout << "Введите исходные данные:" << endl;
    cout << "Радиус основания (см) -> ";
    cin >> radius;
    cout << "Высота цилиндра (см) -> ";
    cin >> height;
    double area = 2 * pi * radius * (height + radius);
    string answer = format("Площадь поверхности цилиндра: {:.2f} кв.см", area);
    cout << endl<< answer << endl;
    return 0;
}
