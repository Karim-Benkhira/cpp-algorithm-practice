#include <iostream>

using namespace std;

void ReadNUmbers(int &A,int &B)
{
    cout << "PLease Enter Reactangle With A : " << endl;
    cin >> A;
    cout << "Please Enter Reactangle length B : " << endl;
    cin >> B;
}

int CalculateRecatangleArea(int Number1,int Number2)
{
    return Number1 * Number2;
}

void PrintResulta(int Resulta)
{
    cout << "Rectangle Area is : " << Resulta << endl;
}

int main()
{
    int Number1,Number2;
    ReadNUmbers(Number1,Number2);
    PrintResulta(CalculateRecatangleArea(Number1,Number2));
    return 0;
}