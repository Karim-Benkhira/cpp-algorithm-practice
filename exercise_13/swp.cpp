#include <iostream>

using namespace std;

void Read2Numbers(int &number1,int &number2)
{
    cout << "Please Enter Number 1 : " << endl;
    cin >> number1;
    cout << "Plesae Enter Number 2 : " << endl;
    cin >> number2;
}

void Swap(int &number1,int &number2)
{
    int tmp;
    tmp = number1;
    number1 = number2;
    number2 = tmp;
}

void PrintNumbers(int number1,int number2)
{
    cout << "Number 1 is : " << number1 << endl << "number 2 is : " << number2 << endl;
    cout << endl;
}

int main()
{
    int number1;
    int number2;
    Read2Numbers(number1,number2);
    PrintNumbers(number1,number2);
    Swap(number1,number2);
    PrintNumbers(number1,number2);
    return (0);
}