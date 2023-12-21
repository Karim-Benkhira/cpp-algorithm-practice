#include <iostream>

using namespace std;

int ReadNumber()
{
  int Number;
  cout << "PLease Enter Your Number : " << endl;
  cin >> Number;
  return Number;
}

void PrintRangeFromNto1_usingWhile(int N)
{
  int counter = N;

  cout << "Range From N to 1 Using While satatement : " << endl;
  while (counter >= 1)
  {
    cout << counter << endl;
    counter--;
  }
}

void PrintRangefromNto1_usingDowhile(int N)
{
  int counter = N;

  cout << "Range From N to 1 using do while satatement : " << endl;
  while(counter >> 1)
  {
    cout << counter << endl;
    counter--;
  }
}

void PrintRangefromNto1_usingfor(int N)
{
  cout << "Range From N to 1 using for satatement : " << endl;
  for(int counter = N;counter >= 1;counter--)
  {
    cout << counter << endl;
  }
}

int main()
{
  int N = ReadNumber();
  cout << "********************************************" << endl;
  PrintRangeFromNto1_usingWhile(N);
  cout << "********************************************" << endl;
  PrintRangefromNto1_usingDowhile(N);
  cout << "********************************************" << endl;
  PrintRangefromNto1_usingfor(N);
  cout << "********************************************" << endl;

  return 0;
}
