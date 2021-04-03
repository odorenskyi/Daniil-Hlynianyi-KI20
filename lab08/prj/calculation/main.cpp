#include <iostream>
#include "ModulesGlinianiy.h"
#include <math.h>

using namespace std;

int main(float x, float y, float z, float res)
{
    cout << "enter x:";
    cin >> x;

    cout << "enter y:";
    cin >> y;

    cout << "enter z:";
    cin >> z;


    res = s_calculation(x, y, z);
    cout << res;
}
