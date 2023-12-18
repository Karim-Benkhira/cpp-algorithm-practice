# CheckAverage Program

This C++ program takes user input for three numbers, calculates their sum, calculates the average, and checks if the average is a passing grade.

## Description

The program consists of four functions:
- `Read3Numbers`: Takes three integer references (`number1`, `number2`, and `number3`) and prompts the user to enter three numbers.
- `CalculSumNumber`: Takes three integer parameters (`number1`, `number2`, and `number3`) and returns their sum.
- `CalculAverage`: Takes three integer parameters (`number1`, `number2`, and `number3`) and returns their average.
- `CheakAverage`: Takes a float parameter `Average` and checks if it's a passing grade, returning either `Pass` or `Fail`.
- `PrintResult`: Takes a float parameter `result` and prints the average along with a message indicating whether the average is a passing grade.

The `main` function calls these functions to read three numbers from the user, calculate their sum, calculate the average, and then check and print the result.

## How to Use

1. Ensure you have a C++ compiler installed on your system.
2. Clone the repository to your local machine.
3. Compile the program using your preferred C++ compiler.
4. Run the executable.

## Example

```cpp
#include <iostream>

using namespace std;

enum enCheakAverage {Pass = 1, Fail = 2};

void Read3Numbers(int &number1, int &number2, int &number3)
{
    cout << "Please Enter Number 1 : " << endl;
    cin >> number1;
    cout << "Please Enter Number 2 : " << endl;
    cin >> number2;
    cout << "Please Enter Number 3 : " << endl;
    cin >> number3;
}

int CalculSumNumber(int number1, int number2, int number3)
{
    return (number1 + number2 + number3);
}

float CalculAverage(int number1, int number2, int number3)
{
    return ((float) CalculSumNumber(number1, number2, number3) / 3);
}

enCheakAverage CheakAverage(float Average)
{
    if (Average >= 50)
        return enCheakAverage::Pass;
    else
        return enCheakAverage::Fail;
}

void PrintResult(float result)
{
    cout << "***************************************\n";
    cout << "*                                     *\n";
    cout << "*\tThe average is: " << result << "\t      *\n";
    cout << "*                                     *\n";
    if (CheakAverage(result) == enCheakAverage::Pass)
        cout << "*\tYou Passed\t\t      *\n";
    else
        cout << "*\tYou Failed\t\t      *\n";
    cout << "*                                     *\n";
    cout << "***************************************\n";
}

int main()
{
    int number1, number2, number3;
    Read3Numbers(number1, number2, number3);
    PrintResult(CalculAverage(number1, number2, number3));
    return 0;
}
