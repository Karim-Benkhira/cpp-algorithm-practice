#include <iostream>
#include <string>

using namespace std;

int ReadNumber(string Message)
{
  int Number;
  do {
    cout << Message << endl;
    cin >> Number;
  } while(Number <= 0);
  return Number;
}

float TotalMonth(int LoanAmount,int MonthlyInstalement)
{
  return (float) LoanAmount / MonthlyInstalement;
}

int main()
{
  int LoanAmount = ReadNumber("Please Enter Loan Amount : ");
  int MonthlyInstalement = ReadNumber("Please Enter Monthly Instalement : ");

  cout << "Total Month to Pay = " << TotalMonth(LoanAmount,MonthlyInstalement);
  return (0);
}
