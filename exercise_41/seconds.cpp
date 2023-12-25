#include <iostream>
#include <string>

using namespace std;

struct stTaskduration
{
  int NumberOfWeek;
  int NumberofDays;
  int NumberofHours;
  int Numberofminuts;
  int NumberofSeconds;
};

int ReadNumber(string Messege)
{
  int Number;
  do {
    cout << Messege << endl;
    cin >> Number;
  } while(Number <= 0);
  return Number;
}

stTaskduration ReadTaskDuration()
{
  stTaskduration TaskDuration;
  TaskDuration.NumberOfWeek = ReadNumber("Please Enter Number of Week : ");
  TaskDuration.NumberofDays = ReadNumber("Please Enter Number of Days : ");
  TaskDuration.NumberofHours = ReadNumber("Please Enter Number of Hours : ");
  TaskDuration.Numberofminuts = ReadNumber("Please Enter Number Of minuts : ");
  TaskDuration.NumberofSeconds = ReadNumber("Please Enter Number of Seconds : ");


  return TaskDuration;
}

int TaskDurationInseconds(stTaskduration TaskDuration)
{
  int DurationInsecons = 0;
  DurationInsecons = TaskDuration.NumberOfWeek * 7 * 24 * 60 * 60;
  DurationInsecons += TaskDuration.NumberofDays * 24 * 60 * 60;
  DurationInsecons += TaskDuration.NumberofHours * 60 * 60;
  DurationInsecons += TaskDuration.Numberofminuts * 60;
  DurationInsecons += TaskDuration.NumberofSeconds;

  return DurationInsecons;
}

int main()
{
  int DurationInsecons = TaskDurationInseconds(ReadTaskDuration());

  cout << "task Duration In secons = " << DurationInsecons << endl;
  return (0);
}
