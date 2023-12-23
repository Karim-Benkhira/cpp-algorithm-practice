#include <iostream>

using namespace std;

struct stPiggyBankContent
{
  int Pennis,Nickels,Dimes,Quarters,Dollars;
};

stPiggyBankContent ReadPiggyBankContent()
{
  stPiggyBankContent PiggyBankContent;

  cout << "PLease Enter a Total Pennies : " << endl;
  cin >> PiggyBankContent.Pennis;
  cout << "PLease Enter a Total Nickels : " << endl;
  cin >> PiggyBankContent.Nickels;
  cout << "Please Enter a Total Dimes : " << endl;
  cin >> PiggyBankContent.Dimes;
  cout << "Please Enter a Total Quarters : " << endl;
  cin >> PiggyBankContent.Quarters;
  cout << "Please Enter a Total Dollars : " << endl;
  cin >> PiggyBankContent.Dollars;

  return PiggyBankContent;
}

int CalculateTotalPennis(stPiggyBankContent PiggyBankContent)
{
  int TotalPennies = 0;

  TotalPennies = PiggyBankContent.Pennis * 1 + PiggyBankContent.Nickels * 5 + PiggyBankContent.Dimes * 10
  + PiggyBankContent.Quarters * 25 + PiggyBankContent.Dollars * 100;

  return TotalPennies;
}

int main()
{
  int TotalPennies = CalculateTotalPennis(ReadPiggyBankContent());

  cout << "Total Pennis : " << TotalPennies << endl;
  cout << "Total Dollars : " << (float)TotalPennies / 100 << endl;

  return (0);
}
