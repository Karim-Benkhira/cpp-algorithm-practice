#include <iostream>
#include <string>

using namespace std;

float ReadNumber(string Message)
{
  float Number;
  do {
    cout << Message << endl;
    cin >> Number;
  } while(Number <= 0 );
  return Number;
}

float TotalBillAfterServiceAndetax(float Totalbill)
{
  Totalbill = Totalbill * 1.1;
  Totalbill = Totalbill * 1.16;
  return Totalbill;
}

int main()
{
  float Totalbill = ReadNumber("Please Enter Total bill : ");

  cout << "Total bill = " << Totalbill << endl;
  cout << "Total BillA fter Service Fee and Sales Tax = " << TotalBillAfterServiceAndetax(Totalbill) << endl;
  return 0;
}
