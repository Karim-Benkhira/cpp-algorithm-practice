# Simple Calculator

This C++ program is a simple calculator that performs basic arithmetic operations (addition, subtraction, multiplication, and division). The user is prompted to enter two numbers and choose an operation type. The program then calculates and displays the result.

## Description

The program uses an enumeration `enOperationType` to represent the operation types (`Add`, `Subtract`, `Multiply`, `Divide`). It consists of three functions:
- `ReadNumber`: Takes a string message, prompts the user to enter a number, and returns the entered number.
- `ReadOptype`: Prompts the user to enter an operation type and returns the corresponding enumeration value.
- `Calculate`: Takes two numbers and an operation type, performs the calculation based on the chosen operation, and returns the result.

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

enum enOperationType { Add = '+', Subtract = '-', Multiply = '*', Divide = '/' };

float ReadNumber(string Message)
{
  float Number;
  cout << Message << endl;
  cin >> Number;
  return Number;
}

enOperationType ReadOptype()
{
  char OType;
  cout << "Please Enter Operation Type (+, -, *, /): " << endl;
  cin >> OType;
  return (enOperationType)OType;
}

float Calculate(float Number1, enOperationType Type, float Number2)
{
  switch (Type)
  {
  case enOperationType::Add:
    return Number1 + Number2;
  case enOperationType::Subtract:
    return Number1 - Number2;
  case enOperationType::Multiply:
    return Number1 * Number2;
  case enOperationType::Divide:
    return Number1 / Number2;
  default:
    return Number1 + Number2;
  }
}

int main()
{
  float Number1 = ReadNumber("Enter Number1: ");
  enOperationType OPtype = ReadOptype();
  float Number2 = ReadNumber("Enter Number2: ");

  cout << "**************************************************" << endl;
  cout << "*" << endl;
  cout << "*\tResult: " << Calculate(Number1, OPtype, Number2) << endl;
  cout << "*" << endl;
  cout << "**************************************************" << endl;
}
