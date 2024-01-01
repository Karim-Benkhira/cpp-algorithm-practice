#include <iostream>
#include <string>

using namespace std;

string ReadPassword(string Messge)
{
  string Password;
  cout << Messge << endl;
  cin >> Password;
  return Password;
}

bool CheckLetterPassword(string originalPassword)
{
  int counter = 1;
  string latter = "";

  for(int a = 1;a <= 26;a++)
  {
    for(int i = 1;i <= 26;i++)
    {
      for(int j = 1;j <= 26;j++)
      {

        latter = latter + (char)(a + 64);
        latter = latter + (char)(i + 64);
        latter = latter + (char)(j + 64);

        cout << "Trial[" << counter << "] : " << latter << endl;
        if(latter == originalPassword)
        {
          cout << "\nPassword is " << latter << endl;
          cout << "Found after : " << counter << " Trial(s)";
          return true;
        }

        latter = "";
        counter++;
      }
    }
  }
  return false;
}

int main()
{
  CheckLetterPassword(ReadPassword("Please Enter Original Password : "));
  return  0;
}
