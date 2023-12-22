#include <iostream>

using namespace std;

int ReadNmber()
{
  int Number;
  cout << "Please Enter Number : " << endl;
  cin >> Number;
  return Number;
}

int ReadPower()
{
  int number;
  cout << "PLease Enter the power : " << endl;
  cin >> number;
  return number;
}

int Power(int number,int pow)
{
  int p = 1;
  if(pow == 0)
  {
    return (1);
  }
  for(int i = 1;i <= pow ;i++)
  {
    p = p * number;
  }
  return p;
}

int main()
{
  cout << Power(ReadNmber(),ReadPower()) << endl;

  return 0;
}
