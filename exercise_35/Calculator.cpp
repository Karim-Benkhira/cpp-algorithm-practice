#include <iostream>

using namespace std;

enum enOperationType{Add = '+', subtract = '-' , Multiply = '*', Divide = '/'};

float ReadNumber(string Message)
{
  float Number;
  cout << Message << endl;
  cin >> Number;
  return Number;
}

enOperationType ReaOptype()
{
  char OType;
  cout << "Please Enter Operation Type (+,-,*,/) : " << endl;
  cin >> OType;
  return (enOperationType) OType;
}

float Calculate(float Number1,enOperationType Type,float Number2)
{
  switch (Type) {
    case enOperationType::Add:
      return Number1 + Number2;
    case enOperationType::subtract:
      return Number1 - Number2;
    case enOperationType::Multiply:
      return Number1 * Number2;
    case enOperationType::Divide:
      return Number1 / Number2;
    default:
      return Number1 + Number2;
  }
}

int main()
{
  float Number1 = ReadNumber("Enter Number1 : ");
  enOperationType OPtype = ReaOptype();
  float Number2 = ReadNumber("Enter Number2 : ");

  cout << "**************************************************" << endl;
  cout << "*" << endl;
  cout << "*\tResult : " << Calculate(Number1,OPtype,Number2)  << endl;
  cout << "*" << endl;
  cout << "**************************************************" << endl;
}
