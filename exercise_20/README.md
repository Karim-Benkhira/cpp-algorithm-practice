# CircleAreaByCircumference Program

This C++ program takes user input for the circumference of a circle, calculates its area, and then prints the result to the console.

## Description

The program consists of three functions:
- `ReadCircumference`: Takes no parameters and returns the circumference of the circle entered by the user.
- `CircleAreaByCircumference`: Takes a float parameter `L` (circumference) and returns the area of the circle.
- `PrintResult`: Takes a float parameter `Area` and prints the area of the circle to the console.

The `main` function calls these functions to read the circumference of the circle, calculate its area, and then print the result.

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

float ReadCircumference()
{
  float L;
  cout << "Please Enter Circumference : " << endl;
  cin >> L;
  return L;
}

float CircleAreaByCircumference(float L)
{
  const float Pi = 3.141592653589793238;
  float Area = pow(L, 2) / (4 * Pi);
  return Area;
}

void PrintResult(float Area)
{
  cout << "Circle Area is : " << Area << endl;
}

int main()
{
  PrintResult(CircleAreaByCircumference(ReadCircumference()));
  return 0;
}
