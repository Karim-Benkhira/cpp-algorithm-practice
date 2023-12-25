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

float HoursToDay(int NumberHours)
{
  return (float) NumberHours / 24;
}

/*float HoursToWeek(int NumberHours)
{
  return (float) NumberHours / 24 / 7;
}*/

float DayToweek(float NumberDays)
{
  return (float) NumberDays / 7;
}

int main()
{
  float NumberHours = ReadNumber("Please Enter Number Of Hours : ");
  float NUmberDays = HoursToDay(NumberHours);
  float NumberWeek = DayToweek(NUmberDays);

  cout << "Total Hours = " << NumberHours << endl;
  cout << "Total Days = " << NUmberDays << endl;
  cout << "Total Week = " << NumberWeek << endl;
}
