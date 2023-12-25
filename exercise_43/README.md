# Day Converter

This C++ program converts a numeric representation of a day (1 to 7) into its corresponding day name. The user is prompted to enter a number between 1 and 7, and the program displays the name of the corresponding day.

## Description

The program consists of three functions:
- `ReadNumber`: Takes a string message, prompts the user to enter a number between 1 and 7, and returns the entered number.
- `CheakDays`: Takes a numeric representation of a day and converts it to the corresponding `enDays` enumeration.
- `PrintDay`: Takes an `enDays` enumeration and prints the corresponding day name.

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

enum enDays{Sunday = 1, Monday = 2, Tuesday = 3,
            Wednesday = 4, Thursday = 5, Friday = 6, Saturday = 7};

int ReadNumber(string Message)
{
  int Number;
  do
  {
    cout << Message << endl;
    cin >> Number;
  } while (Number < 1 || Number > 7);
  return Number;
}

enDays CheakDays(int Number)
{
  switch (Number)
  {
  case 1:
    return enDays::Sunday;
  case 2:
    return enDays::Monday;
  case 3:
    return enDays::Tuesday;
  case 4:
    return enDays::Wednesday;
  case 5:
    return enDays::Thursday;
  case 6:
    return enDays::Friday;
  case 7:
    return enDays::Saturday;
  default:
    return enDays::Sunday;
  }
}

void PrintDay(enDays Day)
{
  switch (Day)
  {
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
  PrintDay(CheakDays(ReadNumber("Please Enter a Number between 1 and 7:")));

  return 0;
}
