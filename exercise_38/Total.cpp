#include <iostream>
#include <string>

using namespace std;

float ReadNumber(string Message)
{
  float Number;
  do {
    cout << Message << endl;
    cin >> Number;
  } while(Number <= 0);
  return Number;
}

float CalculateRemainder(float TotalBill,float TotalCashpaid)
{
  return (TotalCashpaid - TotalBill  );
}

int main()
{
  float TotalBill = ReadNumber("Please Enter Total Bill : ");
  float TotalCashpaid = ReadNumber("Please Enter Total Cash paid : ");
  float Remainder = CalculateRemainder(TotalBill,TotalCashpaid);

  cout << "***********************************" << endl;
  cout << "Total Bill = " << TotalBill << endl;
  cout << "Total Cash paid = " << TotalCashpaid << endl;
  cout << "***********************************" << endl;
  cout << "Remainder = " << Remainder << endl;
  cout << "***********************************" << endl;
}
