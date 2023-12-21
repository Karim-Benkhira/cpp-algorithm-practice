# RectangleAreaBySideAndDiagonal Program

This C++ program takes user input for the side length and diagonal of a rectangle, calculates its area, and then prints the result to the console.

## Description

The program consists of three functions:
- `ReadNumbers`: Takes two integer references (`A` and `D`) and prompts the user to enter the side length and diagonal of a rectangle.
- `ReactangleAreabySideandDiagonal`: Takes two integer parameters (`A` and `D`) and returns the area of the rectangle using the side length and diagonal.
- `PrintResult`: Takes a float parameter `Area` and prints the area of the rectangle to the console.

The `main` function calls these functions to read the side length and diagonal of the rectangle, calculate its area, and then print the result.

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
#include <cmath>

using namespace std;

void ReadNumbers(int &A, int &D)
{
  cout << "Please Enter Rectangle Side A : " << endl;
  cin >> A;
  cout << "Please Enter Rectangle Diagonal D : " << endl;
  cin >> D;
}

float ReactangleAreabySideandDiagonal(int A, int D)
{
  float Area;
  Area = A * sqrt(pow(D, 2) - pow(A, 2));
  return Area;
}

void PrintResult(float Area)
{
  cout << "Rectangle Area is : " << Area << endl;
}

int main()
{
  int a, d;
  ReadNumbers(a, d);
  PrintResult(ReactangleAreabySideandDiagonal(a, d));

  return 0;
}
