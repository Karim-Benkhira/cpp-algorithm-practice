# Hours Conversion

This C++ program converts the number of hours into days and weeks. The user is prompted to enter the number of hours, and the program calculates and displays the equivalent number of days and weeks.

## Description

The program consists of three functions:
- `ReadNumber`: Takes a string message, prompts the user to enter a positive number, and returns the entered number.
- `HoursToDay`: Takes the number of hours and converts it into days.
- `DayToWeek`: Takes the number of days and converts it into weeks.

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

int ReadNumber(string Message)
{
  int Number;
  do
  {
    cout << Message << endl;
    cin >> Number;
  } while (Number <= 0);
  return Number;
}

float HoursToDay(int NumberHours)
{
  return (float)NumberHours / 24;
}

float DayToWeek(float NumberDays)
{
  return (float)NumberDays / 7;
}

int main()
{
  float NumberHours = ReadNumber("Please Enter Number Of Hours : ");
  float NumberDays = HoursToDay(NumberHours);
  float NumberWeek = DayToWeek(NumberDays);

  cout << "Total Hours = " << NumberHours << endl;
  cout << "Total Days = " << NumberDays << endl;
  cout << "Total Weeks = " << NumberWeek << endl;

  return 0;
}
