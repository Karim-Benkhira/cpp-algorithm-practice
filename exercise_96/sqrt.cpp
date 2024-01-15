#include <iostream>
#include <cmath>

using namespace std;

int ReadNumber()
{
    int Number;
    cout << "Please Enter a Number : " << endl;
    cin >> Number;
    return Number;
}

float SqrtNumber(int Number)
{
    return pow(Number,0.5);
}

int main()
{
    int Number = ReadNumber();

    cout << "My sqrt result : " << SqrtNumber(Number) << endl; 
    cout << "C++ sqrt result : " << sqrt(Number) << endl;

    return 0;
}
