#include <iostream>

using namespace std;

enum enCheakAverage{Pass = 1,Fail = 2};

void Read3Numbers(int &number1,int &number2, int &number3)
{
    cout << "Please Enter Number 1 : " << endl;
    cin >> number1;
    cout << "Please Enter Number 2 : " << endl;
    cin >> number2;
    cout << "Please Enter Number 3 : " << endl;
    cin >> number3;
}
int CalculSumNumber(int number1,int number2,int number3)
{
    return (number1 + number2 + number3);
}

float CalculAverage(int number1,int number2,int number3)
{
    return ((float) CalculSumNumber (number1,number2,number3) / 3 );
}

enCheakAverage CheakAverage(float Average)
{
    if(Average >= 50 )
        return enCheakAverage::Pass;
    else
        return enCheakAverage::Fail;
}

void PrintResult(float result)
{
    cout << "*\tthe average is:" << result <<"\t      *" << endl;
    cout << "*                                     *\n";
    if(CheakAverage(result) == enCheakAverage::Pass)
        cout << "*\tYou Passed\t\t      *" << endl;
    else
        cout << "*\tYou Faild\t\t      *" << endl;
}

int main()
{
    int number1,number2,number3;
    Read3Numbers(number1,number2,number3);
    cout << "***************************************\n";
    cout << "*                                     *\n";
    PrintResult(CalculAverage(number1,number2,number3));
    cout << "*                                     *\n";
    cout << "***************************************\n";
    return 0;
}