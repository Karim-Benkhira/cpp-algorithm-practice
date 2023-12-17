# Sum3Numbers Program

This C++ program takes user input for three numbers, calculates their sum, and then prints the result to the console.

## Description

The program consists of three functions:
- `Read3Numbers`: Takes three integer references (`number1`, `number2`, and `number3`) and prompts the user to enter three numbers.
- `Sum3Numbers`: Takes three integer parameters (`number1`, `number2`, and `number3`) and returns their sum.
- `PrintResult`: Takes an integer parameter `SumTotal` and prints the total sum to the console.

The `main` function calls these functions to read three numbers from the user, calculate their sum, and then print the result.

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
    return number1 + number2 + number3;
}

void PrintResult(int SumTotal)
{
    cout << "The Total sum of numbers is " << SumTotal << endl;
}

int main()
{
    int number1, number2, number3;
    Read3Numbers(number1, number2, number3);
    PrintResult(Sum3Numbers(number1, number2, number3));
    return 0;
}


### Author

- **Name:** [Karim Benkhira]
- **Occupation:** Software Engineering Student
- **LinkedIn:** [Your LinkedIn Profile](www.linkedin.com/in/karim-benkhira-206597224) (optional)
- **GitHub:** [Your GitHub Profile](https://github.com/Karim-Benkhira)
- **Twitter:** [Your Twitter Profile](https://twitter.com/Karim_Benkhira) (optional)

### Cybersecurity Enthusiast

I am also passionate about ethical hacking and cybersecurity. Currently, I am a beginner in penetration testing and constantly learning new techniques to enhance my skills.

Feel free to connect with me on social media or check out my GitHub repositories!
