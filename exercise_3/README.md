# CheckNumberType Program

This C++ program takes user input for a number, checks if it's even or odd, and then prints the result to the console.

## Description

The program consists of three functions:
- `ReadNumber`: Prompts the user to enter a number and returns it.
- `CheckNumberType`: Takes an integer parameter `Num` and returns an enum value (`Odd` or `Even`) based on the type of the number.
- `PrintNumberType`: Takes an enum parameter `Num` and prints whether the number is even or odd.

The `main` function calls these functions to read a number from the user, check its type, and then print the result.

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

enum enNumberType {Odd = 1, Even = 2};

int ReadNumber()
{
    int Num;

    cout << "Please Enter a Number : " << endl;
    cin >> Num;
    return Num;
}

enNumberType CheckNumberType(int Num)
{
    int Result;

    Result = Num % 2;
    if(Result == 0)
        return enNumberType::Even;
    else
        return enNumberType::Odd;
}

void PrintNumberType(enNumberType Num)
{
    if(Num == enNumberType::Even)
        cout << "Number is Even. " << endl;
    else
        cout << "Number is Odd " << endl;
}

int main()
{
    PrintNumberType(CheckNumberType(ReadNumber()));
    return 0;
}
