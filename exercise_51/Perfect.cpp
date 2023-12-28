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

void PrintPerfictNumberFrom1toN(int Number)
{
  int counter = 1;

  while(counter <= Number)
  {
    if(isPerfectNumber(counter))
      cout << counter << endl;
    counter++;
  }
}

int main()
{
  PrintPerfictNumberFrom1toN(ReadNumber("Please Enter a Positive Number : "));

  return 0;
}
