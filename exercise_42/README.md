# Task Duration Calculator

This C++ program calculates the duration of a task in days, hours, minutes, and seconds based on the total seconds provided by the user. The user is prompted to enter the total seconds, and the program calculates and displays the task duration in the format: "days:hours:minutes:seconds".

## Description

The program consists of three functions:
- `ReadNumber`: Takes a string message, prompts the user to enter a positive number, and returns the entered number.
- `SecondsTotasksDuration`: Takes the total seconds and converts it to a `stTaskDuration` structure representing days, hours, minutes, and seconds.
- `PrinttaskDuration`: Takes a `stTaskDuration` structure and prints the task duration in the format "days:hours:minutes:seconds".

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
  do
  {
    cout << Messege << endl;
    cin >> Number;
  } while (Number <= 0);
  return Number;
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

  return TaskDuration;
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
