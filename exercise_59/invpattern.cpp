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

void InvertedPattern(int Number)
{
  cout << endl;

  while(Number > 0)
  {
    for(int i = 1; i <= Number;i++)
    {
      cout << Number;
    }
    cout << endl;
    Number--;
  }
}

int main()
{
  InvertedPattern(ReadNumber("Please Enter a Positive Number : "));

  return 0;
}
