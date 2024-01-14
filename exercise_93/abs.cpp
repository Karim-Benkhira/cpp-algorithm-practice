#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int ReadNumber(string Messege)
{
    int Number;

    cout << Messege << endl;
    cin >> Number;
    return Number;
}

int absNumber(int Number)
{
    if(Number < 0)
        return Number * -1;
    else
        return Number;
}

int main()
{
    int NUmber = ReadNumber("\nPLease Enter Number");

    cout << "\nMy abs Number : " << absNumber(NUmber) << endl;

    cout << "\nC++ abs Result : " << abs(NUmber) << endl;

    return 0;
}
