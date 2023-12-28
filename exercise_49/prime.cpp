#include <iostream>
#include <string>
#include <cmath>

using namespace std;

enum enPrime_Notprime{prime= 1,Notprime = 2};

int ReadNumber(string Messege)
{
  int Number;
  do {
    cout << Messege << endl;
    cin >> Number;
  } while(Number <= 0);

  return Number;
}

enPrime_Notprime CheakPrimeOrNotPrime(int Number)
{
  int counter = 2;
  while(counter <= round(Number / 2))
  {
    if(Number % counter == 0)
      return enPrime_Notprime::Notprime;
    counter++;
  }
  return enPrime_Notprime::prime;
}

void PrintPrimeNumbersfrom1ToN(int Number)
{
  int counter = 1;
  while (counter <= Number)
  {
    if(CheakPrimeOrNotPrime(counter) == enPrime_Notprime::prime)
      cout << counter << endl;
    counter++;
  }
}

int main()
{
  PrintPrimeNumbersfrom1ToN(ReadNumber("Please Enter a positive Number : "));

  return 0;
}
