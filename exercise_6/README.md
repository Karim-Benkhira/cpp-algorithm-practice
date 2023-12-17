# HalfNumberCalculator Program

This C++ program takes user input for a number, calculates half of the number, and then prints the result to the console.

## Description

The program consists of three functions:
- `ReadNumber`: Prompts the user to enter a number and returns it.
- `CalculateHalfNumber`: Takes an integer parameter `Num` and returns half of it as a float.
- `PrintResult`: Takes an integer parameter `Num`, calculates half using `CalculateHalfNumber`, and then prints the result to the console.

The `main` function calls these functions to read a number from the user, calculate half, and then print the result.

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

int ReadNumber()
{
    int Num;
    cout << "Please Enter a Number : " << endl;
    cin >> Num;
    return Num;
}

float CalculateHalfNumber(int Num)
{
    return static_cast<float>(Num) / 2;
}

void PrintResult(int Num)
{
    string Result = "Half of " + to_string(Num) + " is " + to_string(CalculateHalfNumber(Num));
    cout << Result << endl;
}

int main()
{
    PrintResult(ReadNumber());
    return 0;
}
