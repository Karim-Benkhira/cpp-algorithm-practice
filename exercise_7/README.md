# ExamResultChecker Program

This C++ program takes user input for a exam mark, checks if the user passed or failed, and then prints the result to the console.

## Description

The program consists of three functions:
- `ReadMark`: Prompts the user to enter an exam mark and returns it.
- `CheakMark`: Takes an integer parameter `Mark` and returns an enum value (`Pass` or `Faill`) based on the pass/fail criteria.
- `PrintResult`: Takes an integer parameter `Mark`, checks the result using `CheakMark`, and then prints the result to the console.

The `main` function calls these functions to read an exam mark from the user, check the result, and then print the result.

## How to Use

1. Ensure you have a C++ compiler installed on your system.
2. Clone the repository to your local machine.
3. Compile the program using your preferred C++ compiler.
4. Run the executable.

## Example

```cpp
#include <iostream>
#include <string>

using namespace std;

enum enPassFaill{Pass = 1, Faill = 2};

int ReadMark()
{
    int Mark;
    cout << "Please Enter Your Mark : " << endl;
    cin >> Mark;
    cin.ignore(1,'\n');
    return Mark;
}

enPassFaill CheakMark(int Mark)
{
    return (Mark >= 50) ? enPassFaill::Pass : enPassFaill::Faill;
}

void PrintResult(int Mark)
{
    cout << ((CheakMark(Mark) == enPassFaill::Pass) ? "You Passed" : "You Failed") << endl;
}

int main()
{
    PrintResult(ReadMark());
    return 0;
}
