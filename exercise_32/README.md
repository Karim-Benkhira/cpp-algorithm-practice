# Grade Calculator

This C++ program calculates the grade of a student based on the entered score. The program prompts the user to enter a score between 0 and 100, then determines the corresponding grade.

## Description

The program consists of two functions:
- `ReadNumber`: Prompts the user to enter a number between 0 and 100 and returns the entered number.
- `GetGradeLater`: Takes a score as a parameter and returns the corresponding grade based on the grading scale.

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

using namespace std;

int ReadNumber(int From, int To)
{
  int Number;
  do {
    cout << "PLease Enter Number betwen 0 and 100 : " << endl;
    cin >> Number;
  } while(Number < From || Number > To);

  return Number;
}

char GetGradeLater(int number)
{
  if(number >= 90)
    return 'A';
  else if(number >= 80)
    return 'B';
  else if (number >= 70)
    return 'C';
  else if (number >= 60)
    return 'D';
  else if (number >= 50)
    return 'E';
  else
    return 'F';
}

int main()
{
  char Result = GetGradeLater(ReadNumber(0, 100));
  cout << "Result is : " << Result << endl;

  return 0;
}
