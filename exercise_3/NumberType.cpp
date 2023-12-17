#include <iostream>
#include <string>

using namespace std;

enum enNumberType {Odd = 1, Even = 2};

int ReadNumber()
{
    int Num;

    cout << "Please Enter a Number : " << endl;
    cin >> Num;
    return Num;
}
enNumberType CheckNumberType(int Num)
{
    int Result;

    Result = Num % 2;
    if(Result == 0)
        return enNumberType::Even;
    else
        return enNumberType::Odd;
}
void PrintNumberType(enNumberType Num)
{
    if(Num == enNumberType::Even)
        cout << "Number is Even. " << endl;
    else
        cout << "Number is Odd " << endl;
}

int main()
{
    PrintNumberType(CheckNumberType(ReadNumber()));
    return (0);
}