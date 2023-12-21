# CircleAreaByInscribedTriangle Program

This C++ program takes user input for the sides of an inscribed triangle in a circle, calculates the area of the circle, and then prints the result to the console.

## Description

The program consists of three functions:
- `ReadTriangleData`: Takes two float parameters `A` and `B` (sides of the inscribed triangle) and assigns user input to them.
- `CircleAreaByInscribedTriangle`: Takes two float parameters `A` and `B` (sides of the inscribed triangle) and returns the area of the circle.
- `PrintResult`: Takes a float parameter `Area` and prints the area of the circle to the console.

The `main` function calls these functions to read the sides of the inscribed triangle, calculate the area of the circle, and then print the result.

## How to Use

1. Ensure you have a C++ compiler installed on your system.
2. Clone the repository to your local machine.
3. Compile the program using your preferred C++ compiler.
4. Run the executable.

## Example

```cpp
#include <iostream>
#include <cmath>

using namespace std;

void ReadTriangleData(float &A, float &B)
{
  cout << "Please Enter Triangle Side A : " << endl;
  cin >> A;
  cout << "Please Enter Triangle Base B : " << endl;
  cin >> B;
}

float CircleAreaByInscribedTriangle(float A, float B)
{
  const float Pi = 3.141592653589793238;
  float Area = Pi * (pow(B, 2) / 4) * ((2 * A - B) / (2 * A + B));
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
  ReadTriangleData(A, B);
  PrintResult(CircleAreaByInscribedTriangle(A, B));
  return 0;
}
