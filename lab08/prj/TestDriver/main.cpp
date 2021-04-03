#include <iostream>
#include "ModulesGlinianiy.h"

using namespace std;

int main()
{
    float x[10] = {4, 5, 66, 11, 5, 99, 9, 20, 100, 21};
    float y[10] = {4, 5, 4, 1, 6, 55, 9, 13, 99, 12};
    float z[10] = {4, 5, 3, 4, 7, 2, 9, 16, 98, 5};
    float S[10] = {11.58, 239.27, 0.05, -2.21, 713.41, 0.02, -4281.22, 0.8, 0.98, 0.24};

    for(int i = 0; i < 10; i++)
    {
        if(s_calculation(x[i], y[i], z[i]) == S[i])
        {
            cout << "Passed! Your testing result = " << S[i] << endl;
        }
        if(s_calculation(x[i], y[i], z[i]) != S[i])
        {
            cout << "Failed! Your testing result != " << S[i] << endl;
        }
    }

    getchar();

}
