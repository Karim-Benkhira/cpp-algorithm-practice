# Absolute Number Comparison Program

This C++ program demonstrates the calculation of the absolute value of a number using both a custom function and the built-in `abs` function. It includes functions for reading user input, calculating the absolute value, and comparing the results.

## Description

The program prompts the user to enter a number, calculates its absolute value using both a custom function and the built-in `abs` function, and then compares and displays the results.

## How to Use

1. Ensure you have a C++ compiler installed on your system.
2. Clone the repository to your local machine.
3. Open the file named "main.cpp" in your preferred text editor.
4. Compile the program using your C++ compiler.
5. Run the executable.

## Program Structure

### `ReadNumber` Function:

- Takes a message as a parameter and prompts the user to enter a number.
- Returns the entered number.

### `absNumber` Function:

- Takes a number as a parameter.
- Calculates the absolute value of the number using a custom function.
- Returns the absolute value.

### `main` Function:

- Declares a variable (`Number`) and initializes it with the user's input using `ReadNumber`.
- Calls the custom `absNumber` function to calculate the absolute value and prints the result.
- Calls the built-in `abs` function and prints its result.


## Example

```cpp
#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int ReadNumber(string Messege)
{
    int Number;

    cout << Messege << endl;
    cin >> Number;
    return Number;
}

int absNumber(int Number)
{
    if(Number < 0)
        return Number * -1;
    else
        return Number;
}

int main()
{
    int NUmber = ReadNumber("\nPLease Enter Number");

    cout << "\nMy abs Number : " << absNumber(NUmber) << endl;

    cout << "\nC++ abs Result : " << abs(NUmber) << endl;

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

Feel free to connect with me on social media or check out my GitHub repositories!
