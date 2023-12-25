# Task Duration Calculator

This C++ program calculates the duration of a task in seconds. The user is prompted to enter the number of weeks, days, hours, minutes, and seconds, and the program calculates and displays the total duration in seconds.

## Description

The program consists of two functions:
- `ReadNumber`: Takes a string message, prompts the user to enter a positive number, and returns the entered number.
- `ReadTaskDuration`: Reads the number of weeks, days, hours, minutes, and seconds for a task and returns a `stTaskduration` structure.
- `TaskDurationInseconds`: Takes a `stTaskduration` structure and calculates the total duration in seconds.

## How to Use

1. Ensure you have a C++ compiler installed on your system.
2. Clone the repository to your local machine.
3. Compile the program using your preferred C++ compiler.
4. Run the executable.

### Author

- **Name:** Karim Benkhira
- **Occupation:** Software Engineering Student
- **LinkedIn:** [karim-benkhira](https://linkedin.com/in/karim-benkhira-206597224)
- **GitHub:** [Karim-Benkhira](https://github.com/Karim-Benkhira)
- **Twitter:** [Karim_Benkhira](https://twitter.com/Karim_Benkhira)

### Cybersecurity Enthusiast

I am also passionate about ethical hacking and cybersecurity. Currently, I am a beginner in penetration testing and constantly learning new techniques to enhance my skills.

Feel free to connect with me on social media or check out my GitHub repositories!

## Example

```cpp
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
  do
  {
    cout << Messege << endl;
    cin >> Number;
  } while (Number <= 0);
  return Number;
}

stTaskduration ReadTaskDuration()
{
  stTaskduration TaskDuration;
  TaskDuration.NumberOfWeek = ReadNumber("Please Enter Number of Weeks: ");
  TaskDuration.NumberofDays = ReadNumber("Please Enter Number of Days: ");
  TaskDuration.NumberofHours = ReadNumber("Please Enter Number of Hours: ");
  TaskDuration.Numberofminuts = ReadNumber("Please Enter Number Of Minutes: ");
  TaskDuration.NumberofSeconds = ReadNumber("Please Enter Number of Seconds: ");

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

  cout << "Task Duration In seconds = " << DurationInsecons << endl;

  return 0;
}
