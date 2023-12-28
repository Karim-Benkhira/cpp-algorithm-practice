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

bool isPerfectNumber(int Number)
{
  int counter = 1;
  int sum = 0;

  while(counter < Number)
  {
    if(Number % counter == 0)
      sum = sum + counter;
      
    counter++;
  }
  return sum == Number;
}

void PrintPerfictNumber(int Number)
{
  if(isPerfectNumber(Number))
    cout << Number << " is Perfect " << endl;
  else
    cout << Number << " Is Not Perfect " << endl;
}

int main()
{
  PrintPerfictNumber(ReadNumber("Please Enter a Positive Number : "));

  return 0;
}
