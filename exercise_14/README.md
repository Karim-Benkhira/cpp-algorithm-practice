# RectangleArea Program

This C++ program takes user input for the length and width of a rectangle, calculates its area, and then prints the result to the console.

## Description

The program consists of three functions:
- `ReadNUmbers`: Takes two integer references (`A` and `B`) and prompts the user to enter the length and width of a rectangle.
- `CalculateRecatangleArea`: Takes two integer parameters (`Number1` and `Number2`) and returns the area of the rectangle.
- `PrintResulta`: Takes an integer parameter `Resulta` and prints the area of the rectangle to the console.

The `main` function calls these functions to read the dimensions of the rectangle, calculate its area, and then print the result.

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

void ReadNUmbers(int &A, int &B)
{
    cout << "Please Enter Rectangle Length A : " << endl;
    cin >> A;
    cout << "Please Enter Rectangle Width B : " << endl;
    cin >> B;
}

int CalculateRecatangleArea(int Number1, int Number2)
{
    return Number1 * Number2;
}

void PrintResulta(int Resulta)
{
    cout << "Rectangle Area is : " << Resulta << endl;
}

int main()
{
    int Number1, Number2;
    ReadNUmbers(Number1, Number2);
    PrintResulta(CalculateRecatangleArea(Number1, Number2));
    return 0;
}
