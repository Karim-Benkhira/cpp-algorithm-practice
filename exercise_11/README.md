# MaxOf2Numbers Program

This C++ program takes user input for two numbers, determines the maximum of the two, and then prints the result to the console.

## Description

The program consists of three functions:
- `Read2Numbers`: Takes two integer references (`number1` and `number2`) and prompts the user to enter two numbers.
- `MaxOf2Numbers`: Takes two integer parameters (`number1` and `number2`) and returns the maximum of the two.
- `PrintMaxNumber`: Takes an integer parameter `Max` and prints the maximum number to the console.

The `main` function calls these functions to read two numbers from the user, determine the maximum, and then print the result.

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

using namespace std;

void Read2Numbers(int &number1, int &number2)
{
    cout << "Please Enter Number 1 : " << endl;
    cin >> number1;
    cout << "Please Enter Number 2 : " << endl;
    cin >> number2;
}

int MaxOf2Numbers(int number1, int number2)
{
    if (number1 > number2)
        return number1;
    else
        return number2;
}

void PrintMaxNumber(int Max)
{
    cout << "Max Number is : " << Max << endl;
}

int main()
{
    int number1, number2;

    Read2Numbers(number1, number2);
    PrintMaxNumber(MaxOf2Numbers(number1, number2));
    return 0;
}
