#include <iostream>
#include <cmath>

using namespace std;

float ReadNumber(string Messege)
{
    float Number;
    cout << Messege << endl;
    cin >> Number;
    return Number;
}

float GetFractionPart(float Number)
{
    return Number - int(Number);
}

int MyCeil(float Number)
{
    float FractionPart = GetFractionPart(Number);

    if(Number > 0 && FractionPart >= 0.1)
    {
        return ++Number;
    }
    else 
        return Number;
}

int main()
{
    float Number = ReadNumber("Please Enter Float Number : ");
    
    cout << "My Ceil result : " << MyCeil(Number) << endl;
    cout << "C++ Ceil result : " << ceil(Number) << endl;

    return 0;
}
