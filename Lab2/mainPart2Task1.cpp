#include <iostream>

using namespace std;

int main(){
    double x, answer;
    int n;
    cout << "Please input double x: ";
    cin >> x;
    cout << "Please input n range 0 to 7: ";
    cin >> n;
    switch (n) {
        case 0:
            answer = 1;
            break;
        case 1:
            answer = x;
            break;
        case 2:
            answer = x * x;
            break;
        case 3:
            answer = pow(x,3);
            break;
        case 4:
            answer = pow(x,4);
            break;
        case 5:
            answer = pow(x,5);
            break;
        case 6:
            answer = pow(x,6);
            break;
        case 7:
            answer = pow(x,7);
            break;
        default:
            cout << "n is not range 0 to 7" << endl;
            return 0;
    }
    cout << "x^n = " << answer << endl;
    return 0;
}
