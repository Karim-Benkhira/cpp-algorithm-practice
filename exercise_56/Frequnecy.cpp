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

int coutdigitFrequency(int Number,int digit)
{
  int Remainder = 0;
  int counter = 0;

  while(Number > 0)
  {
    Remainder = Number % 10;
    Number = Number / 10;
    if(Remainder == digit)
      counter++;
  }
  return counter;
}

void PrintAllDigitFrequency(int Number)
{
  for(int i = 0;i <= 9;i++)
  {
    short digitFrequency = 0;
    digitFrequency = coutdigitFrequency(Number,i);

    if(digitFrequency > 0)
      {
        cout << "Digit " << i << " Frequency is : " << digitFrequency << " Time(s)" << endl;
      }
  }
}

int main()
{
  int Number = ReadNumber("Please Enter a Positive Number : ");

  PrintAllDigitFrequency(Number);

  return 0;
}
