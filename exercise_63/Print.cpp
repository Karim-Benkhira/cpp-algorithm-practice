#include <iostream>
#include <string>

using namespace std;

void PrintallwordsFromAAAtoZZZ()
{
  int Letter = 1;

  while(Letter <= 26)
  {
    for(int i = 1; i <= 26;i++)
    {
      for(int j = 1; j<= 26;j++)
      {

          cout << (char)(Letter + 64)
               << (char)(i + 64)
               << (char)(j + 64)
               << endl;
      }
    }
    Letter++;
  }
}

int main()
{
  PrintallwordsFromAAAtoZZZ();

  return 0;
}
