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

int Maxof3Numbers(int number1,int number2,int number3)
{
    if(number1 > number2)
        if(number1 > number3)
            return number1;
        else
            return number3;
    else
        if(number2 > number3)
            return number2;
        else
            return number3;
}

void PrintMaxof3Numbers(int Max)
{
    cout << "Max Numbers is : " << Max << endl;
}

int main()
{
    int number1,number2,number3;
    Read3Numbers(number1,number2,number3);
    PrintMaxof3Numbers(Maxof3Numbers(number1,number2,number3));
    return 0;
}