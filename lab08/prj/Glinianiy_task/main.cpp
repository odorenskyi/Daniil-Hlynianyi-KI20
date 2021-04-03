#include <iostream>
#include <locale.h>
#include "ModulesGlinianiy.h"

using namespace std;

int main()
{
    float a, b;
    float x, y, z, res;

    cout << "Danil Glinianiy. CNTU 2021. (c)" << endl;

    setlocale(LC_ALL, "ukr");
    cout << "\n¬ведiть символ a: ";
    cin >> a;

    cout << "\n¬ведiть символ b: ";
    cin >> b;

    if(a+1 > b-2){
        cout << "\n–езультат: \a" << true;
    }
    else{
        cout << "\n–езультат: \a" << false;
    }

    cout << "\n\n¬ведiть число x: ";
    cin  >>  x;
    cout << "„исло x в шiстнадц€тковiй системi: " << hexfloat << x << endl;

    cout << "\n¬ведiть число y: ";
    cin >> y;
    cout << "„исло y в шiстнадц€тковiй системi: " << hexfloat << y << endl;

    cout << "\n¬ведiть число z: ";
    cin >> z;
    cout << "„исло z в шiстнадц€тковiй системi: " << hexfloat << z << endl;

    res = s_calculation(x, y, z);

    cout << "\n–езультат: \a" << hexfloat <<  res << endl;
}
