# ReadAndPrintName Program

This C++ program takes user input for a name and then prints it to the console.

## Description

The program consists of two functions:
- `ReadName`: Prompts the user to enter their name and returns it as a string.
- `PrintName`: Takes a string parameter `Name` and prints it to the console.

The `main` function calls these functions to read a name from the user and then print it.

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

string ReadName()
{
    string Name;
    cout << "Please Enter your Name : " << endl;
    getline(cin, Name);
    return Name;
}

void PrintName(string Name)
{
    cout << "Your Name is : " << Name << endl;
}

int main()
{
    PrintName(ReadName());
    return 0;
}
