# Factorial Calculator

This C++ program calculates the factorial of a positive integer `N`. The program prompts the user to enter a positive number and then calculates its factorial using a `for` loop.

## Description

The program consists of two functions:
- `ReadPositiveNumber`: Takes a message as a parameter, prompts the user to enter a positive number, and returns the entered number.
- `Factorial`: Takes an integer parameter `N` and calculates its factorial using a `for` loop.
- `main`: The main function that calls the other functions to read a positive number from the user and calculate its factorial.

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

int ReadPositiveNumber(string Message)
{
  int number;

  do {
    cout << Message ;
    cin >> number;
  } while(number < 0);
  return number;
}

int Factorial(int N)
{
  int F = 1;

  for(int counter = N;counter >= 1;counter--)
  {
    F = F * counter;
  }
  return F;
}

int main()
{
  cout << Factorial(ReadPositiveNumber("Enter N : ")) << endl;

  return 0;
}
