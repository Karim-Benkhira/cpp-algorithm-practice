#include <iostream>
#include <iostream>

using namespace std;

int ReadNumbers(string Messege)
{
  int Number;

  do {
    cout << Messege << endl;
    cin >> Number;
  } while(Number <= 0);
  return Number;
}

int countDigitFrequency(int Number,int digit)
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

int main()
{
  int ReadNumber = ReadNumbers("Please Enter a positive Number : ");
  int ReadDigit = ReadNumbers("Please Enter one digit to check : ");
  int counter = countDigitFrequency(ReadNumber,ReadDigit);

  cout << "Digit " << ReadDigit << " Frequency is "<< counter << " Time(s)"<< endl;

  return 0;
}
