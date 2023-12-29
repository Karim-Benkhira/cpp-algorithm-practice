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

int Sumdigit(int Number)
{
  int sum = 0;
  int Remainder = 0;

  while(Number > 0)
  {
    Remainder = Number % 10;
    sum = sum + Remainder;
    Number = Number / 10;
  }
  return sum;
}

int main()
{
  int sum = Sumdigit(ReadNumber("Please Enter a positive Number : "));
  cout << "Sum Of digit = "<< sum << endl;
}
