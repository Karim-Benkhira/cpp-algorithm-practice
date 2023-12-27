#include <iostream>
#include <string>

using namespace std;

int ReadPincode()
{
  int PinCode;
  cout << "Please Enter Pin Code : " << endl;
  cin >> PinCode;
  return PinCode;
}

bool Login()
{
  int counter = 3;
  int PinCode;
  do {
    PinCode = ReadPincode();
    counter--;
    if(PinCode == 1234)
      return 1;
    else
      cout << "Wrong Pin,You Have " << counter << " More tries" << endl;
      cout << "---------------------------------------------" << endl;
  } while(counter >= 1 && PinCode != 1234);
  return 0;
}

int main()
{
  if(Login())
  {
    cout << "---------------------------------------------" << endl;
    cout << "Your account Balance is " << 7500 << endl;
  }
  else
    cout << "Your Card blocked call the bankfor help " << endl;

  return 0;
}
