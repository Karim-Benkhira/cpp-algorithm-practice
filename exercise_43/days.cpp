#include <iostream>
#include <string>

using namespace std;

enum enDays{Sunday = 1,Monday = 2,Tuesday = 3,
            Wednesday = 4,Thursday = 5,Friday = 6,Saturday = 7};
int ReadNumber(string Message)
{
  int Number;
  do {
    cout << Message << endl;
    cin >> Number;
  } while(Number < 1 || Number > 7);
  return Number;
}

enDays CheakDays(int Number)
{
  if(Number == 1)
    return (enDays::Sunday);
  else if(Number == 2)
    return enDays::Monday;
  else if (Number == 3)
    return enDays::Tuesday;
  else if(Number == 4)
    return enDays::Wednesday;
  else if(Number == 5)
    return enDays::Thursday;
  else if(Number == 6)
    return enDays::Friday;
  else
    return enDays::Saturday;
}

void PrintDay(enDays Day)
{
  switch (Day) {
    case enDays::Sunday:
      cout << "Sunday" << endl;
      break;
    case enDays::Monday:
      cout << "Monday" << endl;
      break;
    case enDays::Tuesday:
      cout << "Tuesday" << endl;
      break;
    case enDays::Wednesday:
      cout << "Wednesday" << endl;
      break;
    case enDays::Thursday:
      cout << "Thursday" << endl;
      break;
    case enDays::Friday:
      cout << "Friday" << endl;
      break;
    case enDays::Saturday:
      cout << "Saturday" << endl;
      break;
  }
}

int main()
{
  PrintDay(CheakDays(ReadNumber("Please Enter a Number between 1 and 7 : ")));

  return 0;
}
