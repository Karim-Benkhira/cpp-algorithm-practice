# PrintName Program

This is a simple C++ program that prints a name using a function.

## Description

The program defines a function `PrintName` that takes a string parameter `Name` and prints it to the console. The `main` function calls this function with a specific name.

## How to Use

1. Make sure you have a C++ compiler installed on your system.
2. Clone the repository to your local machine.
3. Compile the program using your preferred C++ compiler.
4. Run the executable.

## Example

```cpp
#include <iostream>
#include <string>
using namespace std;

void PrintName(string Name)
{
    cout << "Your Name is : " << Name << endl;
}

int main()
{
    PrintName("Karim Benkhira (Software Engineering Student)");
}
