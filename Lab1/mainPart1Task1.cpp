#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double x,a,b;
    cout << "x -> ";
    cin >> x;
    cout << "a -> ";
    cin >> a;
    cout << "b -> ";
    cin >> b;
    double part1 = 1/sin(x);
    double part2 = exp(-b);
    double part3 = log(a+b);
    double answer = part1 * part2 * part3;
    cout << "y -> " << answer << endl;
    return 0;
}
