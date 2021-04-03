#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;

float s_calculation(float x, float y, float z)
{
    float S = pow(3 * sin(sqrt(12 * x + log10(x - 3))), y) + z/x;
    S = int(S*100 + 0.5)/100.0;
    return S;
}

void SampleFunction1()
{

}


int SampleFunction2()
{

}
