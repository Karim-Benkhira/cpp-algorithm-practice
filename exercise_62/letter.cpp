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

void PrintLetterPattern(int Number)
{
  cout << endl;
  int counter = 1;

  while(counter <= Number)
  {
    for(int i = 1;i <= counter;i++)
    {
      cout << (char)(counter + 64);
    }
    cout << endl;
    counter++;
  }
}

int main()
{
  PrintLetterPattern(ReadNumber("Please Enter a Positive Number : "));

  return (0);
}
