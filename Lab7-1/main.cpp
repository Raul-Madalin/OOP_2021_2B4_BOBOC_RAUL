#include <iostream>
using namespace std;

float operator"" _Kelvin(unsigned long long int x)
{
    float value1;
    value1 = x - 273.15;

    return (float)value1;
}

float operator"" _Fahrenheit(unsigned long long int x)
{
    int value1;
    value1 = x - 32;

    float value2;
    value2 = (float)(value1 / 1.8);

    return float(value2);
}

int main() {

    float a = 300_Kelvin;
    cout << "a este " << a << " in Celsius\n";
    
    float b = 120_Fahrenheit;
    cout << "b este " << b << " in Celsius\n";

    return 0;
}