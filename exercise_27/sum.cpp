#include <iostream>

using namespace std;

enum enOddorEven{odd = 1,Even = 2};
int ReadNumber()
{
  int Number;
  cout << "Please Enter your Number : " << endl;
  cin >> Number;
  return Number;
}

enOddorEven ChekOddorEven(int Number)
{
  if(Number % 2 != 0)
    return enOddorEven::odd;
  else
    return enOddorEven::Even;
}

int SumoddNumberFrom1toN_usingWhile(int N)
{
  int counter = 1;
  int sum = 0;

  cout << "Sum odd Number From 1 to N using while statement : " << endl;
  while(counter <= N)
  {
    if(ChekOddorEven(counter) == enOddorEven::odd)
    {
      sum = sum + counter;
    }
    counter++;
  }
  return(sum);
}

int SumoddNumberFrom1toN_usingdowhile(int N)
{
  int counter = 1;
  int sum = 0;

  cout << "Sum odd Numbers from 1 to N using do while statement : " << endl;
  do {
    if(ChekOddorEven(counter) == enOddorEven::odd)
    {
      sum = sum + counter;
    }
    counter++;
  } while(counter <= N);
  return sum;
}

int SumoddNumberFrom1toN_usingfor(int N)
{
  int sum = 0;

  cout << "Sum odd Numbers from 1 to N using for statement : " << endl;
  for(int counter = 1;counter <= N ; counter++)
  {
    if(ChekOddorEven(counter) == enOddorEven::odd)
    {
      sum = sum + counter;
    }
  }
  return sum;
}

int main()
{
  int N = ReadNumber();

  cout << "************************************" << endl;
  cout << SumoddNumberFrom1toN_usingWhile(N) << endl;
  cout << "************************************" << endl;
  cout << SumoddNumberFrom1toN_usingdowhile(N) << endl;
  cout << "************************************" << endl;
  cout << SumoddNumberFrom1toN_usingfor(N) << endl;
  cout << "************************************" << endl;
}
