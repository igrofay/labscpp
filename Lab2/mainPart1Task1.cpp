#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double x, y;
    cout << "Input x: ";
    cin >> x;
    if (x<1) {
        y = cos(2*x);
    }else if(x <= 4.5){
        y = exp(-2*x);
    }else{
        y = 1 + 3*x;
    }
    cout<< "y = " << y << endl;
    return 0;
}
