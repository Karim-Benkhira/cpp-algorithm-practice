# FullNamePrinter Program

This C++ program takes user input for first and last names, combines them into a full name, and then prints the result to the console.

## Description

The program defines a structure `stinfo` to store information about the user, including the first and last names. It consists of three functions:
- `ReadInfo`: Prompts the user to enter their first and last names, then returns a structure containing this information.
- `GetFullName`: Takes a `stinfo` structure parameter and returns a string representing the full name by combining the first and last names.
- `PrintFullName`: Takes a string parameter and prints the full name to the console.

The `main` function calls these functions to read user information, generate the full name, and then print the result.

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

struct stinfo
{
    string FirstName;
    string LastName;
};

stinfo ReadInfo()
{
    stinfo info;
    cout << "Please Enter Your first Name : " << endl;
    cin >> info.FirstName;
    cout << "Please Enter Your LastName : " << endl;
    cin >> info.LastName;
    return info;
}

string GetFullName(stinfo info)
{
    return info.FirstName + " " + info.LastName;
}

void PrintFullName(string info)
{
    cout << "Your FullName is : " << info << endl;
}

int main()
{
    PrintFullName(GetFullName(ReadInfo()));
    return 0;
}
