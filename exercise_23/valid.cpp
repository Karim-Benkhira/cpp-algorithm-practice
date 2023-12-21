#include <iostream>

using namespace std;

int ReadAge()
{
  int Age;
  cout << "PLease Enter You age : " << endl;
  cin >> Age;
  return Age;
}

bool ValidateNumberInRange(int Number1, int From,int To)
{
  return(Number1 >= From && Number1 <= To);
}

void PrintResult(int Age)
{
  if(ValidateNumberInRange(Age,18,45))
    cout << Age << " Is a Valid age " << endl;
  else
    cout << Age << " Is invalid Age " << endl;
}

int main()
{
  PrintResult(ReadAge());

  return 0;
}
