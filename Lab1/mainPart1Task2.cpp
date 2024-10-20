#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double x;
    cout << "x -> ";
    cin >> x;
    double part1 = pow(x,2);
    double part2 = log10(x);
    double part3 = pow(10, -x);
    double answer = part1 * part2 * part3;
    cout << answer;
    return 0;
}
