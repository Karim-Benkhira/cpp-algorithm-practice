#include <iostream>

using namespace std;

enum enOddorEven{odd = 1,Even = 2};

int ReadNumber()
{
  int Number;
  cout << "Please Enter Your Number : " << endl;
  cin >> Number;
  return Number;
}

enOddorEven ChekOddOrEven(int Number)
{
  if(Number % 2 == 0)
    return enOddorEven::Even;
  else
    return enOddorEven::odd;
}

int SumEvenNUmberFrom1toN_usingwhile(int N)
{
  int counter = 1;
  int sum = 0;

  cout << "Sum Even NUmber From 1 to N using while statment : " << endl;
  while (counter <= N) {
    if(ChekOddOrEven(counter) == enOddorEven::Even)
    {
      sum = sum + counter;
    }
    counter++;
  }
  return sum;
}

int SumEvenNUmberFrom1toN_usingdowhile(int N)
{
  int counter = 1;
  int sum = 0;

  cout << "Sum Even numbers from 1 to N using do while statment : " << endl;
  do {
    if(ChekOddOrEven(counter) == enOddorEven::Even)
    {
      sum = sum + counter;
    }
    counter++;
  } while(counter <= N);
  return sum;
}

int SumEvenNUmberFrom1toN_usingfor(int N)
{
  int sum = 0;

  cout << "Sum even Numbers from 1 to N using for statment : " << endl;
  for(int counter = 1;counter <= N;counter++)
  {
    if(ChekOddOrEven(counter) == enOddorEven::Even)
    {
      sum = sum + counter;
    }
  }
  return sum;
}

int main()
{
  int N = ReadNumber();

  cout << "*****************************************************" << endl;
  cout << SumEvenNUmberFrom1toN_usingwhile(N) << endl;
  cout << "*****************************************************" << endl;
  cout << SumEvenNUmberFrom1toN_usingdowhile(N) << endl;
  cout << "*****************************************************" << endl;
  cout << SumEvenNUmberFrom1toN_usingfor(N) << endl;
  cout << "*****************************************************" << endl;

  return 0;
}
