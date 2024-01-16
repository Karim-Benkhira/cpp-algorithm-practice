# Ceiling Function Comparison Program

This C++ program compares the result of a custom ceiling function (`MyCeil`) with the built-in `ceil` function. The program prompts the user to enter a float number, calculates the ceiling value using both functions, and displays the results.

## Description

The program includes functions for reading a float number, extracting the fractional part, and calculating the ceiling using both a custom ceiling function and the built-in `ceil` function.

## How to Use

1. Ensure you have a C++ compiler installed on your system.
2. Clone the repository to your local machine.
3. Open the file named "main.cpp" in your preferred text editor.
4. Compile the program using your C++ compiler.
5. Run the executable.

## Program Structure

### `ReadNumber` Function:

- Takes a message as a parameter and prompts the user to enter a float number.
- Returns the entered float number.

### `GetFractionPart` Function:

- Takes a float number as a parameter.
- Calculates and returns the fractional part of the given float number.

### `MyCeil` Function:

- Takes a float number as a parameter.
- Calculates and returns the ceiling value using a custom method.

### `main` Function:

- Declares a variable (`Number`) and initializes it with the user's input using `ReadNumber`.
- Calls the custom `MyCeil` function to calculate the ceiling value and prints the result.
- Calls the built-in `ceil` function and prints its result.


## Example

```cpp
#include <iostream>
#include <cmath>

using namespace std;

float ReadNumber(string Messege)
{
    float Number;
    cout << Messege << endl;
    cin >> Number;
    return Number;
}

float GetFractionPart(float Number)
{
    return Number - int(Number);
}

int MyCeil(float Number)
{
    float FractionPart = GetFractionPart(Number);

    if(Number > 0 && FractionPart >= 0.1)
    {
        return ++Number;
    }
    else 
        return Number;
}

int main()
{
    float Number = ReadNumber("Please Enter Float Number : ");
    
    cout << "My Ceil result : " << MyCeil(Number) << endl;
    cout << "C++ Ceil result : " << ceil(Number) << endl;

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