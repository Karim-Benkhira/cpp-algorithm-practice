# JobApplicationChecker Program

This C++ program takes user input for age and driving license status, checks if the applicant is eligible for a job, and then prints the result to the console.

## Description

The program defines a structure `stInfo` to store information about the applicant, including age and whether they have a driving license. It consists of three functions:
- `ReadInfo`: Prompts the user to enter their age and driving license status, then returns a structure containing this information.
- `isAccepted`: Takes a `stInfo` structure parameter and returns a boolean indicating whether the applicant is accepted based on age and driving license criteria.
- `PrintResult`: Takes a `stInfo` structure parameter and prints whether the applicant is hired or rejected.

The `main` function calls these functions to read applicant information, check eligibility, and then print the result.

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

struct stInfo
{
    int Age;
    bool HasDrivingLicense;
};

stInfo ReadInfo()
{
    stInfo info;

    cout << "Please Enter Your Age : " << endl;
    cin >> info.Age;
    cout << "Do You have driver License ? " << endl;
    cin >> info.HasDrivingLicense;

    return info;
}

bool isAccepted(stInfo info)
{
    return (info.Age > 20 && info.HasDrivingLicense == true);
}

void PrintResult(stInfo info)
{
    if (isAccepted(info))
        cout << "Hired " << endl;
    else
        cout << "Rejected " << endl;
}

int main()
{
    PrintResult(ReadInfo());
    return 0;
}
