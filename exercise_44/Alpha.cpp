#include <iostream>

using namespace std;

void PrintLettersAtoZ()
{
  for(char alpha = 'A';alpha <= 'Z';alpha++)
  {
    cout << alpha << endl;
  }
}

int main()
{
  PrintLettersAtoZ();

  return 0;
}
