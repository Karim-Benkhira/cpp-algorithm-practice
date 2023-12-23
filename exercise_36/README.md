# Simple Number Summation Program

This C++ program allows the user to enter numbers continuously until a sentinel value (-91) is entered. The program calculates and displays the sum of the entered numbers.

## Description

The program consists of two functions:
- `ReadNumber`: Takes a string message, prompts the user to enter a number, and returns the entered number.
- `SumNumbers`: Uses a do-while loop to continuously prompt the user to enter numbers. The loop breaks when the sentinel value (-91) is entered. It returns the sum of the entered numbers.

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

float ReadNumber(string Message)
{
  float Number;
  cout << Message << endl;
  cin >> Number;
  return Number;
}

float SumNumbers()
{
  int counter = 1;
  float Sum = 0;
  float Number;

  do
  {
    Number = ReadNumber("Please Enter Number " + to_string(counter) + " (-91 to exit): ");

    if (Number == -91)
    {
      break;
    }

    Sum += Number;
    counter++;
  } while (Number != -91);

  return Sum;
}

int main()
{
  float sum = SumNumbers();
  cout << "Sum of Numbers: " << sum << endl;
  return 0;
}
