#include <iostream>
#include <string>

using namespace std;

int ReadNumber(string Messege)
{
  int Number;
  do {
    cout << Messege << endl;
    cin >> Number;
    cout << endl;
  } while(Number <= 0);

  return Number;
}

int PrintRevirseDigit(int Number)
{
  int Remainder = 0;
  int NumberREv = 0;


  while(Number > 0)
  {
    Remainder = Number % 10;
    Number = Number / 10;
    NumberREv = NumberREv * 10 + Remainder;
  }
  return NumberREv;
}

int main()
{

  int REv = PrintRevirseDigit(ReadNumber("Please Enter a Positive Number : "));
  
  cout << "Reverse is : " << endl << REv << endl;

  return 0;
}
