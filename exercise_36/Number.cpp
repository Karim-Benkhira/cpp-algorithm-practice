#include <iostream>

using namespace std;

float ReadNumber(string Message)
{
  float Number;
  cout << Message << endl;
  cin >> Number;
  return (Number);
}

float SumNumbers()
{
  int counter = 1;
  float Sum = 0;
  float Number;
  do {
    Number = ReadNumber("Please Enter Number " + to_string(counter) + " : ");

    if(Number == -91)
    {
      break;
    }

    Sum = Sum + Number;
    counter++;
  } while(Number != -91);
  return (Sum);
}

int main()
{
  float sum = SumNumbers();
  cout << "Sum of Numbers = " << sum << endl;
  return(0);
}
