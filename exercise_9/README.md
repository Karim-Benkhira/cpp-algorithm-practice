# AverageNumbers Program

This C++ program takes user input for three numbers, calculates their sum, and then calculates and prints the average.

## Description

The program consists of three functions:
- `Read3Numbers`: Takes three integer references (`number1`, `number2`, and `number3`) and prompts the user to enter three numbers.
- `Sum3Numbers`: Takes three integer parameters (`number1`, `number2`, and `number3`) and returns their sum.
- `AverageNumbers`: Takes three integer parameters (`number1`, `number2`, and `number3`) and returns their average.
- `PrintAverage`: Takes a float parameter `Average` and prints the average to the console.

The `main` function calls these functions to read three numbers from the user, calculate their sum, calculate the average, and then print the result.

## How to Use

1. Ensure you have a C++ compiler installed on your system.
2. Clone the repository to your local machine.
3. Compile the program using your preferred C++ compiler.
4. Run the executable.

## About

Hello! 👋 My name is Karim Benkhira, a Software Engineering student and aspiring ethical hacker. I created this C++ program as part of my journey to enhance my programming skills and explore the world of cybersecurity.

### Author

- **Name:** Karim Benkhira
- **Occupation:** Software Engineering Student
- **LinkedIn:** [karim-benkhira](https://linkedin.com/in/karim-benkhira-206597224)
- **GitHub:** [Karim-Benkhira](https://github.com/Karim-Benkhira)
- **Twitter:** [Karim_Benkhira](https://twitter.com/Karim_Benkhira)

### Cybersecurity Enthusiast

I am also passionate about ethical hacking and cybersecurity. Currently, I am a beginner in penetration testing and constantly learning new techniques to enhance my skills.

Feel free to connect with me on social media or check out my GitHub repositories!

---

## Example

```cpp
#include <iostream>
#include <string>

using namespace std;

void Read3Numbers(int &number1, int &number2, int &number3)
{
    cout << "Please Enter Number 1 : " << endl;
    cin >> number1;
    cout << "Please Enter Number 2 : " << endl;
    cin >> number2;
    cout << "Please Enter Number 3 : " << endl;
    cin >> number3;
}

int Sum3Numbers(int number1, int number2, int number3)
{
    return (number1 + number2 + number3);
}

float AverageNumbers(int number1, int number2, int number3)
{
    return ((float) Sum3Numbers(number1, number2, number3)) / 3;
}

void PrintAverage(float Average)
{
    cout << "The Average is " << Average << endl;
}

int main()
{
    int number1, number2, number3;
    Read3Numbers(number1, number2, number3);
    PrintAverage(AverageNumbers(number1, number2, number3));
    return (0);
}
