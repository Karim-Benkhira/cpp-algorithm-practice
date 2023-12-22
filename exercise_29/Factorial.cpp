#include <iostream>

using namespace std;

int ReadPositiveNumber(string Message)
{
  int number;

  do {
    cout << Message ;
    cin >> number;
  } while(number < 0);
  return number;
}

int Factorial(int N)
{
  int F = 1;

  for(int counter = N;counter >= 1;counter--)
  {
    F = F * counter;
  }
  return F;
}

int main()
{
  cout << Factorial(ReadPositiveNumber("Enter N : ")) << endl;

  return 0;
}
