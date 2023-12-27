#include <iostream>
#include <string>

using namespace std;

string ReadPinCode()
{
  string PinCode;
    cout << "Please Enter Pin Code : " << endl;
    cin >> PinCode;

    return PinCode;
}

bool Login()
{
  string PinCode;
  do {
    PinCode = ReadPinCode();
    if(PinCode == "1234")
      return 1;
    else
    {
      cout << "Wrong Pin Code : " << endl;
      system("color 4F");
    }
  } while(PinCode != "1234");
  return(0);
}

int main()
{
  if(Login())
  {
    system("color 2F");
    cout << "Your Account balance is : " << 75000 << endl;
  }
  return 0;
}
