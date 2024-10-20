#include <iostream>
#include <cmath>
using namespace std;

int main(){
    setlocale(0, "RU");
    double a,b, xn,xk, dx, sum, mul, numerNegative;
    cout << "Input a: ";
    cin >> a;
    cout << "Input b: ";
    cin >> b;
    cout << "Input start of range n: ";
    cin >> xn;
    cout << "Input end of range k: ";
    cin >> xk;
    cout << "Input step dx: ";
    cin >> dx;
    printf("|   X   |   Z   |\n");
    for(double x = xn;x<=xk;x+=dx){
        double cube = (a + x*x)/log(b+x);
        double z = (a-b) * pow(cube,1/3);
        printf("| %5.2lf | %5.2lf |\n", x, z);
    }
    return 0;
}
