#include <iostream>
#include <ModulesGlinianiy.h>
#include <fstream>

using namespace std;

int main()
{
    int bin[5] = {1, 2, 3, 4, 5};
    int res[5] = {1, 10, 11, 100, 101};

    for(int i = 0; i < 5; i++)
    {
        if(in10_to2(bin[i]) == res[i])
        {
            cout << "\nPassed! Your testing result = " << res[i] << endl;
        }
        if(in10_to2(bin[i]) != res[i])
        {
            cout << "\nFailed! Your testing result != " << res[i] << endl;
        }
    }

    int x[5] = {1, 2, 3, -1, 0};
    int y[5] = {1, 2, 3, -1, 0};
    int z[5] = {1, 2, 3, -1, 0};
    int resu[5] = {-21474836, -21474836, -21474836, -21474836, -21474836};

    for(int i = 0; i < 5; i++)
    {
        if(s_calculation(x[i], y[i], z[i]) == resu[i])
        {
            cout << "\nPassed! Your testing result = " << resu[i] << endl;
        }
        if(s_calculation(x[i], y[i], z[i]) != resu[i])
        {
            cout << "\nFailed! Your testing result != " << resu[i] << endl;
        }
    }

    system("pause");







}
