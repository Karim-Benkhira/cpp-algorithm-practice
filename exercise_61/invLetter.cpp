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

void InvertedLetter(int Number)
{

  while(Number > 0)
  {
    for(int i = 1 ; i <= Number ;i++)
    {
      cout << (char)(Number + 64);
    }
    cout << endl;
    Number--;
  }
}

int main()
{
  InvertedLetter(ReadNumber("Please Enter a Positive Number : "));

  return 0;
}
