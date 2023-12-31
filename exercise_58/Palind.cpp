#include <iostream>
#include <string>

using namespace std;

int ReadNumber(string Messege)
{
  int Number;

  do {
    cout << Messege << endl;
    cin >> Number;
  } while(Number <= 0);
  return Number;
}

int DigitReverse(int Number)
{
  int Remainder = 0;
  int RevDigit = 0;

  while(Number > 0)
  {
    Remainder = Number % 10;
    Number = Number / 10;
    RevDigit = RevDigit * 10 + Remainder;
  }

  return RevDigit;
}

void CheckPolindrome(int Number)
{
  if(DigitReverse(Number) == Number)
    cout << "Yes, it is a Polindrome Number" << endl;
  else
    cout << "No, it is Not  a Polindrome Number" << endl;
}

int main()
{
  CheckPolindrome(ReadNumber("Please Enter a Positive Number : "));

  return 0;
}
