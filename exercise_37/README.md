# Prime Number Checker

This C++ program checks whether a given positive number is a prime number or not. The user is prompted to enter a positive number, and the program determines and displays whether the entered number is prime.

## Description

The program consists of two functions:
- `ReadNumber`: Takes a string message, prompts the user to enter a positive number, and returns the entered number.
- `CheckNumber`: Checks whether a given number is a prime number. It returns an enumeration value indicating whether the number is prime or not.
- `PrintNumberType`: Takes a number and prints whether it is a prime or not.

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
#include <cmath>

using namespace std;

enum enPrimeandNotPrime { Prime = 1, NotPrime = 2 };

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

enPrimeandNotPrime CheckNumber(int Number)
{
  int NB = round(Number / 2);
  for (int counter = 2; counter <= NB; counter++)
  {
    if (Number % counter == 0)
      return enPrimeandNotPrime::NotPrime;
  }
  return enPrimeandNotPrime::Prime;
}

void PrintNumberType(int Number)
{
  switch (CheckNumber(Number))
  {
  case enPrimeandNotPrime::Prime:
    cout << "The Number " << Number << " is Prime." << endl;
    break;
  case enPrimeandNotPrime::NotPrime:
    cout << "The Number " << Number << " is Not Prime." << endl;
    break;
  }
}

int main()
{
  PrintNumberType(ReadNumber("Please enter a Positive Number:"));

  return 0;
}
