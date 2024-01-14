# Float Number Rounding Program

This C++ program demonstrates rounding a float number to the nearest integer using both a custom rounding function and the built-in `round` function. It includes functions for reading user input, extracting the fraction part of a float, and rounding to the nearest integer.

## Description

The program prompts the user to enter a float number, calculates its rounded value using both a custom rounding function and the built-in `round` function, and then compares and displays the results.

## How to Use

1. Ensure you have a C++ compiler installed on your system.
2. Clone the repository to your local machine.
3. Open the file named "main.cpp" in your preferred text editor.
4. Compile the program using your C++ compiler.
5. Run the executable.

## Program Structure

### `ReadNumber` Function:

- Prompts the user to enter a float number.
- Returns the entered float number.

### `GetFractionPart` Function:

- Takes a float number as a parameter.
- Calculates and returns the fractional part of the number.

### `MyRound` Function:

- Takes a float number as a parameter.
- Rounds the float number to the nearest integer using a custom rounding method.
- Returns the rounded integer.

### `main` Function:

- Declares a variable (`Number`) and initializes it with the user's input using `ReadNumber`.
- Calls the custom `MyRound` function to round the float number and prints the result.
- Calls the built-in `round` function and prints its result.


## Example

```cpp
#include <iostream>
#include <cmath>

using namespace std;
float ReadNumber()
{
    float Number;
    cout << "\nPlease Enter a Float Number : " << endl;
    cin >> Number;
    return Number;
}

float GetFractionPart(float Number)
{
    return Number - int(Number);
}

int MyRound(float Number)
{
    int inPart;
    inPart = int(Number);

    float FractionPart = GetFractionPart(Number);

    if(abs(FractionPart) > .5)
    {
        if(Number > 0)
            return ++Number;
        else
            return --Number;
    }
    else
        return inPart;
}

int main()
{
    float Number = ReadNumber();
    cout << "My Round Result : " << MyRound(Number) << endl;
    cout << "C++ Round Result: " << round(Number) << endl;
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
