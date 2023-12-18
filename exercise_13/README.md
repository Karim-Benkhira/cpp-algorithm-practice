# SwapNumbers Program

This C++ program takes user input for two numbers, swaps them, and then prints the original and swapped numbers to the console.

## Description

The program consists of three functions:
- `Read2Numbers`: Takes two integer references (`number1` and `number2`) and prompts the user to enter two numbers.
- `Swap`: Takes two integer references (`number1` and `number2`) and swaps their values.
- `PrintNumbers`: Takes two integer parameters (`number1` and `number2`) and prints their values to the console.

The `main` function calls these functions to read two numbers from the user, print the original numbers, swap them, and then print the swapped numbers.

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

void Swap(int &number1, int &number2)
{
    int tmp;
    tmp = number1;
    number1 = number2;
    number2 = tmp;
}

void PrintNumbers(int number1, int number2)
{
    cout << "Number 1 is : " << number1 << endl << "Number 2 is : " << number2 << endl;
    cout << endl;
}

int main()
{
    int number1, number2;
    Read2Numbers(number1, number2);
    PrintNumbers(number1, number2);
    Swap(number1, number2);
    PrintNumbers(number1, number2);
    return (0);
}
