#include <iostream>

using namespace std;

void Read2Numbers(int &number1,int &number2)
{
    cout << "Please Enter Number 1 : " << endl;
    cin >> number1;
    cout << "Please Enter Number 2 " << endl;
    cin >> number2;
}

int MaxOf2Numbers(int number1,int number2)
{
    if(number1 > number2)
        return number1;
    else
        return number2;
}

void PrintMaxNumber(int Max)
{
    cout << "Max Number is : " << Max << endl;
}

int main()
{
    int number1,number2;

    Read2Numbers(number1,number2);
    PrintMaxNumber(MaxOf2Numbers(number1,number2));
}