#include <iostream>
#include <cmath>

using namespace std;
float ReadNumber()
{
    float Number;
    cout << "\nPlease Enter a Float Number : " << endl;
    cin >> Number;
    return Number;
}

float GetFractionPart(float Number)
{
    return Number - int(Number);
}

int MyRound(float Number)
{
    int inPart;
    inPart = int(Number);

    float FractionPart = GetFractionPart(Number);

    if(abs(FractionPart) > .5)
    {
        if(Number > 0)
            return ++Number;
        else
            return --Number;
    }
    else
        return inPart;
}

int main()
{
    float Number = ReadNumber();
    cout << "My Round Result : " << MyRound(Number) << endl;
    cout << "C++ Round Result: " << round(Number) << endl;
}
