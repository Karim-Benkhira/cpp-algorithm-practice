# Perfect Number Checker

This C++ program checks whether a given positive number is a perfect number or not. A perfect number is a positive integer that is equal to the sum of its proper divisors, excluding itself.

## Description

The program consists of two functions:

### `ReadNumber` Function:

- Takes a string message as a parameter.
- Prompts the user to enter a positive number.
- Returns the entered number.

### `isPerfectNumber` Function:

- Takes an integer `Number` as a parameter.
- Checks whether the number is a perfect number or not.
- Returns a boolean value indicating the result.

### `PrintPerfectNumber` Function:

- Takes an integer `Number` as a parameter.
- Calls `isPerfectNumber` to check if the number is perfect.
- Prints the result.

## How to Use

1. Ensure you have a C++ compiler installed on your system.
2. Clone the repository to your local machine.
3. Open the file named "main.cpp" in your preferred text editor.
4. Compile the program using your C++ compiler.
5. Run the executable.

## Program Structure

### `main` Function:

The main entry function prompts the user to enter a positive number and then calls `PrintPerfectNumber` to check and display whether the number is perfect or not.

## Example

```cpp
#include <iostream>
#include <string>

using namespace std;

int ReadNumber(string Messege)
{
  int Number;

  do {
    cout << Messege << endl;
    cin >> Number;
  } while(Number <= 0);

  return Number;
}

bool isPerfectNumber(int Number)
{
  int counter = 1;
  int sum = 0;

  while(counter < Number)
  {
    if(Number % counter == 0)
      sum = sum + counter;

    counter++;
  }
  return sum == Number;
}

void PrintPerfictNumber(int Number)
{
  if(isPerfectNumber(Number))
    cout << Number << " is Perfect " << endl;
  else
    cout << Number << " Is Not Perfect " << endl;
}

int main()
{
  PrintPerfictNumber(ReadNumber("Please Enter a Positive Number : "));

  return 0;
}

```
### Author

- **Name:** Karim Benkhira
- **Occupation:** Software Engineering Student
- **LinkedIn:** [karim-benkhira](https://linkedin.com/in/karim-benkhira-206597224)
- **GitHub:** [Karim-Benkhira](https://github.com/Karim-Benkhira)
- **Twitter:** [Karim_Benkhira](https://twitter.com/Karim_Benkhira)

### Cybersecurity Enthusiast

I am also passionate about ethical hacking and cybersecurity. Currently, I am a beginner in penetration testing and constantly learning new techniques to enhance my skills.

Feel free to connect with me on social media or check out my GitHub repositories!
