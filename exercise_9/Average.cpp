#include <iostream>

using namespace std;

void Read3Numbers(int &number1,int &number2,int &number3)
{
    cout << "Please Enter Number 1 : " << endl;
    cin >> number1;
    cout << "Please Enter Number 2 : " << endl;
    cin >> number2;
    cout << "Please Enter Number 3 : " << endl;
    cin >> number3;
}

int Sum3Numbers(int number1,int number2,int number3)
{
    return (number1 + number2 + number3);
}

float AverageNumbers(int number1,int number2,int number3)
{
    return ((float) Sum3Numbers(number1,number2,number3)) / 3;
}

void PrintAverage(float Average)
{
    cout << "The Average is " << Average << endl;
}

int main()
{
    int number1,number2,number3;
    Read3Numbers(number1,number2,number3);
    PrintAverage(AverageNumbers(number1,number2,number3));
    return (0);
}