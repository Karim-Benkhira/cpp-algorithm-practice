#include <iostream>
#include <string>

using namespace std;

void Read3Numbers (int &number1,int &number2,int &number3)
{
    cout << "Please Enter Number 1 : " << endl;
    cin >> number1;
    cout << "Please Enter Number 2 " << endl;
    cin >> number2;
    cout << "Please Enter Number 3 " << endl;
    cin >> number3;
}

int Sum3Numbers(int number1,int number2,int number3)
{
    return number1 + number2 + number3;
}

void PrintResult(int Sumtotal)
{
    cout << "The Total sum of numbers is " << Sumtotal << endl;
}

int main()
{
    int number1,number2,number3;
    Read3Numbers(number1,number2,number3);
    PrintResult(Sum3Numbers(number1,number2,number3));
}