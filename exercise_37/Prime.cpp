#include <iostream>
#include <cmath>

using namespace std;

enum enPrimeandNotPrime{Prime = 1, NotPrime = 2};

int ReadNumber(string Message)
{
  int Number;
  do {
    cout << Message << endl;
    cin >> Number;
  } while(Number <= 0);
  return Number;
}

enPrimeandNotPrime cheakNumber(int Number)
{
  int NB = round(Number / 2);
  for(int counter = 1; counter <= NB ; counter++)
  {
    if(Number % 2 == 0)
      return enPrimeandNotPrime::NotPrime;
  }
  return enPrimeandNotPrime::Prime;
}

void PrintNumberType(int Number)
{
  switch (cheakNumber(Number))
  {
    case enPrimeandNotPrime::Prime:
      cout << "The Number " << Number << " is Prime ." << endl;
      break;
    case enPrimeandNotPrime::NotPrime:
      cout << "The Number " << Number << " is Not Prime ." << endl;
      break;
  }
}

int main()
{
  PrintNumberType(ReadNumber("Please enter a Positive Number : "));

  return 0;
}
