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

void PrintDigit(int Number)
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
  PrintDigit(ReadNumber("Please Enter a Positive Number : "));

  return 0;
}
