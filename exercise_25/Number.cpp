#include <iostream>

using namespace std;

int ReadNumber()
{
  int Number;
  cout << "Please Enter Your Number : " << endl;
  cin >> Number;
  return Number;
}

void PrintRangeFrom1toN_while(int Number)
{
  int Counter;

  Counter = 1;
  while (Counter <= Number) {
    cout << Counter << endl;
    Counter++;
  }
}

void PrintRangeFrom1toN_DoWhile(int Number)
{
  int Counter;
  Counter = 1;

  do {
    cout << Counter << endl;
    Counter++;
  } while(Counter <= Number);
}

void PrintRangeFrom1toN_For(int number)
{
  for(int Counter = 1;Counter <= number;Counter++)
  {
    cout << Counter << endl;
  }
}

int main()
{
  int Nb = ReadNumber();
  cout << "********************************" << endl;
  PrintRangeFrom1toN_while(Nb);
  cout << "********************************" << endl;
  PrintRangeFrom1toN_DoWhile(Nb);
  cout << "********************************" << endl;
  PrintRangeFrom1toN_For(Nb);
  cout << "********************************" << endl;

  return (0);
}
