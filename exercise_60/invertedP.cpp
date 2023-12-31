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

void invertedPattern(int Number)
{
  int counter = 1;
  while(counter <= Number)
  {
    for(int i = 1;i <= counter ;i++)
    {
      cout << counter;
    }
    cout << endl;
    counter++;
  }
}

int main()
{
  invertedPattern(ReadNumber("Please Enter a Positive Number : "));

  return 0;
}
