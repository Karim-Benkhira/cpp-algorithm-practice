#include <iostream>
#include <string>

using namespace std;

int ReadNumber(string Messge)
{
  int Number;

  do {
    cout << Messge << endl;
    cin >> Number;
  } while(Number <= 0);
  return Number;
}

int NumberReverse(int Number)
{
  int Remainder = 0;
  int digit = 0;

  while(Number > 0)
  {
    Remainder = Number % 10;
    Number = Number / 10;
    digit = digit * 10 + Remainder;
  }
  return digit;
}

void PrintNumber(int Number)
{
  int Remainder = 0;

  while(Number > 0)
  {
    Remainder = Number % 10;
    Number = Number / 10;
    cout << Remainder << endl;
  }
}

int main()
{
  PrintNumber(NumberReverse(ReadNumber("Please Enter a Positive Number : ")));

  return 0;
}
