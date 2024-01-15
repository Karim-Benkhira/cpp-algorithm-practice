# Square Root Calculation Program

This C++ program demonstrates calculating the square root of a number using both a custom square root function and the built-in `sqrt` function. It includes functions for reading user input and performing square root operations.

## Description

The program prompts the user to enter an integer, calculates its square root using both a custom square root function and the built-in `sqrt` function, and then compares and displays the results.

## How to Use

1. Ensure you have a C++ compiler installed on your system.
2. Clone the repository to your local machine.
3. Open the file named "main.cpp" in your preferred text editor.
4. Compile the program using your C++ compiler.
5. Run the executable.

## Program Structure

### `ReadNumber` Function:

- Prompts the user to enter an integer.
- Returns the entered integer.

### `SqrtNumber` Function:

- Takes an integer as a parameter.
- Calculates and returns the square root of the integer using a custom square root method.

### `main` Function:

- Declares a variable (`Number`) and initializes it with the user's input using `ReadNumber`.
- Calls the custom `SqrtNumber` function to calculate the square root and prints the result.
- Calls the built-in `sqrt` function and prints its result.


## Example

```cpp
#include <iostream>
#include <cmath>

using namespace std;

int ReadNumber()
{
    int Number;
    cout << "Please Enter a Number : " << endl;
    cin >> Number;
    return Number;
}

float SqrtNumber(int Number)
{
    return pow(Number,0.5);
}

int main()
{
    int Number = ReadNumber();

    cout << "My sqrt result : " << SqrtNumber(Number) << endl; 
    cout << "C++ sqrt result : " << sqrt(Number) << endl;

    return 0;
}

```

### Author

- **Name:** Karim Benkhira
- **Occupation:** Software Engineering Student
- **LinkedIn:** [karim-benkhira](https://linkedin.com/in/karim-benkhira-206597224)
- **GitHub:** [Karim-Benkhira](https://github.com/Karim-Benkhira)
- **Twitter:** [Karim_Benkhira](https://twitter.com/Karim_Benkhira)

### Cybersecurity Enthusiast

I am also passionate about ethical hacking and cybersecurity. Currently, I am a beginner in penetration testing and constantly learning new techniques to enhance my skills.