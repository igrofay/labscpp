#include <iostream>
#include <cmath>
using namespace std;

int main(){
    setlocale(0, "RU");
    double a,b, xn,xk, dx, sum = 0, mul = 1, negativeNumbers = 0;
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
        double part1 = (a + x*x)/log(b+x);
        double z = (a-b) * pow(part1,1/3.0);
        if (!isnan(z)){
            sum += z;
            mul *= z;
            if (z <0) negativeNumbers++;
        }
        printf("| %5.2lf | %5.2lf |\n", x, z);
    }
    cout << "Sum of z: " << sum << endl
         << "Product of z: " << mul << endl
         << "Negative numbers of z: " << negativeNumbers << endl;
    return 0;
}
