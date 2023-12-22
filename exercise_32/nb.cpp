#include <iostream>

using namespace std;

int ReadNumber(int From,int To)
{
  int Number;
  do {
    cout << "PLease Enter Number betwen 0 and 100 : " << endl;
    cin >> Number;
  } while(Number < From || Number > To);

  return Number;
}

char GetGradeLater(int number)
{
  if(number >= 90)
    return 'A';
  else if(number >= 80)
    return 'B';
  else if (number >= 70)
    return 'C';
  else if (number >= 60)
    return 'D';
  else if (number >= 50)
    return 'E';
  else
    return 'F';
}

int main()
{
  char Result = GetGradeLater(ReadNumber(0,100));
  cout << "Result is : " << Result << endl;

  return 0;
}
