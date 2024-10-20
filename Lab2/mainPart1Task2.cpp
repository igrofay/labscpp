#include <iostream>
using namespace std;
enum Cities {
    Vladivostok = 423,
    Moscow = 495,
    Murmansk = 815,
    Samara = 846,
};
const float VladivostokCostMin = 3.5f;
const float MoscowCostMin = 1.2f;
const float MurmanskCostMin = 1.8f;
const float SamaraCostMin = 2.4f;

int main(){
    float totalСost, costMinute;
    char nameCity[50];
    int codeCity, callTime;
    cout << "Please input code city: ";
    cin >> codeCity;
    cout << "Please input call time in minutes: ";
    cin >> callTime;
    if (codeCity == Cities::Vladivostok) {
        costMinute = VladivostokCostMin;
        strcpy(nameCity, "Vladivostok");
    }else if (codeCity == Cities::Moscow){
        costMinute = MoscowCostMin;
        strcpy(nameCity, "Moscow");
    }else if (codeCity == Cities::Murmansk){
        costMinute = MurmanskCostMin;
        strcpy(nameCity, "Murmansk");
    }else if (codeCity == Cities::Samara){
        costMinute = SamaraCostMin;
        strcpy(nameCity, "Samara");
    }else{
        cout << "City is not found"
        return 0;
    }
    totalСost = costMinute * callTime;
    printf("The cost of a call to %s is %.1f rubles\n",nameCity, totalСost);
    return 0;
}
