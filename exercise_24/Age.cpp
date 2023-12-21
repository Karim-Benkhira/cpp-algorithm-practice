#include <iostream>

using namespace std;

int ReadAge()
{
  int Age;
  cout << "Please Enter You Age : " << endl;
  cin >> Age;
  return Age;
}

bool ValidateNumberInRange(int Number1 , int From,int To)
{
  return(Number1 >= From && Number1 <= To);
}

int ReadAgeBetween (int From,int To)
{
  int Age;
  do {
    Age = ReadAge();
  } while(!ValidateNumberInRange(Age,From,To));
  return Age;
}

void PrintResult(int Age)
{
  cout << "Your Age is : " << Age << endl;
}

int main()
{
  int From,To;
  PrintResult(ReadAgeBetween(18,45));

  return 0;
}
