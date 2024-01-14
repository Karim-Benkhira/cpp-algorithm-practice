#include <iostream>
#include <cmath>

using namespace std;

float ReadNumber()
{
    float Number;

    cout << "\nPlease Enter a float Number : " << endl;
    cin >> Number;
    return Number;
}

float GetFractionPart(float Number)
{
    return Number - int(Number);
}

int MyFloor(float Number)
{
    float FractionPart = GetFractionPart(Number);

    if(Number < 0 && abs(FractionPart) > 0)
    {
        return --Number;
    }
    else
        return Number;
}

int main()
{
    float Number = ReadNumber();
    cout << "\nMy Floor Result : " << MyFloor(Number) << endl;
    cout << "\nC++ Floor Result : " << floor(Number) << endl;

}
