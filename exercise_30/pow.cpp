#include <iostream>

using namespace std;

int ReaNumber()
{
  int Number;
  cout << "PLease Enter Number : " << endl;
  cin >> Number;
  return Number;
}

void Powerof2_3_4(int number)
{
  int a,b,c;
  a = number * number;
  b = number * number *number * number ;
  c = number * number *number * number * number;

  cout << a << " " << b << " " << c << endl;
}

int main()
{
  Powerof2_3_4(ReaNumber());
  return 0;
}
