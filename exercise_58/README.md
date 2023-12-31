# Palindrome Number Checker

This C++ program checks if a positive number is a palindrome or not.

## Description

The program consists of three functions:

### `ReadNumber` Function:

- Takes a string message as a parameter.
- Prompts the user to enter a positive number.
- Returns the entered number.

### `DigitReverse` Function:

- Takes an integer `Number` as a parameter.
- Reverses the order of its digits and returns the result.

### `CheckPalindrome` Function:

- Takes an integer `Number` as a parameter.
- Calls `DigitReverse` to reverse the digits and checks if it is equal to the original number.
- Prints whether the number is a palindrome or not.

## How to Use

1. Ensure you have a C++ compiler installed on your system.
2. Clone the repository to your local machine.
3. Open the file named "main.cpp" in your preferred text editor.
4. Compile the program using your C++ compiler.
5. Run the executable.


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

int DigitReverse(int Number)
{
  int Remainder = 0;
  int RevDigit = 0;

  while(Number > 0)
  {
    Remainder = Number % 10;
    Number = Number / 10;
    RevDigit = RevDigit * 10 + Remainder;
  }

  return RevDigit;
}

void CheckPolindrome(int Number)
{
  if(DigitReverse(Number) == Number)
    cout << "Yes, it is a Polindrome Number" << endl;
  else
    cout << "No, it is Not  a Polindrome Number" << endl;
}

int main()
{
  CheckPolindrome(ReadNumber("Please Enter a Positive Number : "));

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
