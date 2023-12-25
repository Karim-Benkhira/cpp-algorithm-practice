#include <iostream>
#include <string>
#include <cmath>

using namespace std;

struct stTaskDuration
{
  int NumberofDays;
  int NumberofHours;
  int NumberOfminuts;
  int NumberofSeconds;
};

int ReadNumber(string Messege)
{
  int Number;
  do {
    cout << Messege << endl;
    cin >> Number;
  } while(Number <= 0);
  return (Number);
}

stTaskDuration SecondsTotasksDuration(int Totalseconds)
{
  stTaskDuration TaskDuration;
  const int secondsPerDay = 24 * 60 * 60;
  const int secondsPerHours = 60 * 60;
  const int secondsPerMinuts = 60;
  int Remainder = 0;

  TaskDuration.NumberofDays = floor(Totalseconds / secondsPerDay);
  Remainder = Totalseconds % secondsPerDay;
  TaskDuration.NumberofHours = floor(Remainder / secondsPerHours);
  Remainder = Remainder % secondsPerHours;
  TaskDuration.NumberOfminuts = floor(Remainder / secondsPerMinuts);
  Remainder = Remainder % secondsPerMinuts;
  TaskDuration.NumberofSeconds = floor(Remainder);

  return (TaskDuration);
}

void PrinttaskDuration(stTaskDuration TaskDuration)
{
  cout << TaskDuration.NumberofDays << ":"
       << TaskDuration.NumberofHours << ":"
       << TaskDuration.NumberOfminuts << ":"
       << TaskDuration.NumberofSeconds << endl;
}

int main()
{
  PrinttaskDuration(SecondsTotasksDuration(ReadNumber("Please Enter Total seconds:")));

  return 0;
}
