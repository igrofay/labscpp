#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "RU");
    cout << "Введите возраст: ";
    int age;
    cin >> age;
    int units = age % 10;
    int tens = age % 100;
    if (
            10 <= tens and tens <= 20 or
            5 <= units or units == 0
    ){
        cout << "Мне " << age << " лет" << endl;
        return 0;
    }
    if (2 <= units){
        cout << "Мне " << age << " года" << endl;
    } else{
        cout << "Мне " << age << " год" << endl;
    }
    return 0;
}
