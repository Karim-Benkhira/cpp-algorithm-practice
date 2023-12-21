# CircleAreaByTriangle Program

This C++ program takes user input for the sides of a triangle, calculates the area of the inscribed circle, and then prints the result to the console.

## Description

The program consists of three functions:
- `ReadTriangleData`: Takes three float parameters `A`, `B`, and `C` (sides of the triangle) and assigns user input to them.
- `CircleAreaByTriangle`: Takes three float parameters `A`, `B`, and `C` (sides of the triangle) and returns the area of the inscribed circle.
- `PrintResult`: Takes a float parameter `Area` and prints the area of the inscribed circle to the console.

The `main` function calls these functions to read the sides of the triangle, calculate the area of the inscribed circle, and then print the result.

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

--

## Example

```cpp
#include <iostream>
#include <cmath>

using namespace std;

void ReadTriangleData(float &A, float &B, float &C)
{
  cout << "Please Enter Triangle Side A : " << endl;
  cin >> A;
  cout << "Please Enter Triangle Base B : " << endl;
  cin >> B;
  cout << "Please Enter Triangle Side C : " << endl;
  cin >> C;
}

float CircleAreaByTriangle(float A, float B, float C)
{
  const float Pi = 3.141592653589793238;

  float P;
  P = (A + B + C) / 2;

  float T;
  T = (A * B * C) / (4 * sqrt(P * (P - A) * (P - B) * (P - C)));
  float Area = Pi * pow(T, 2);

  return Area;
}

void PrintResult(float Area)
{
  cout << "Circle Area is : " << Area << endl;
}

int main()
{
  float A;
  float B;
  float C;

  ReadTriangleData(A, B, C);
  PrintResult(CircleAreaByTriangle(A, B, C));
  return 0;
}
