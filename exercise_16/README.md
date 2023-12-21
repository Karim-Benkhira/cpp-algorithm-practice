# TriangleArea Program

This C++ program takes user input for the base and height of a triangle, calculates its area, and then prints the result to the console.

## Description

The program consists of three functions:
- `ReadNUmbers`: Takes two integer references (`A` and `H`) and prompts the user to enter the base and height of a triangle.
- `TreangleArea`: Takes two integer parameters (`A` and `H`) and returns the area of the triangle.
- `PrintTriangleArea`: Takes a float parameter `Area` and prints the area of the triangle to the console.

The `main` function calls these functions to read the base and height of the triangle, calculate its area, and then print the result.

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

void ReadNUmbers(int &A, int &H)
{
  cout << "Please Enter Triangle Base A : " << endl;
  cin >> A;
  cout << "Please Enter Triangle Height H : " << endl;
  cin >> H;
}

float TreangleArea(int A, int H)
{
  float Area;
  Area = (A / 2) * H;
  return Area;
}

void PrintTriangleArea(float Area)
{
  cout << "Triangle Area is : " << Area << endl;
}

int main()
{
  int A, H;
  ReadNUmbers(A, H);
  PrintTriangleArea(TreangleArea(A, H));

  return 0;
}
