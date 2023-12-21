#include <iostream>
#include <cmath>

using namespace std;

float ReadRadious()
{
  float R;
  cout << "PLease Enter Radious R : " << endl;
  cin >> R;
  return R;
}

float CircleArea(float R)
{
  const float Pi = 3.141592653589793238;
  float Area = pow(R,2) * Pi;
  return Area;
}

void PrintResult(float Area)
{
  cout << "Circle Area is : " << Area << endl;
}

int main()
{
  PrintResult(CircleArea(ReadRadious()));

  return 0;
}
