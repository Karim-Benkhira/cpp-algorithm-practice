#include <iostream>
#include <cmath>

using namespace std;

void ReadTriangledata(float &A,float &B,float &C)
{
  cout << "Please Enter Tiangle side A : " << endl;
  cin >> A;
  cout << "Please Enter Triangle base B : " << endl;
  cin >> B;
  cout << "Please Enter Triangle side C : " << endl;
  cin >> C;
}

float CircleAriaByTriangle(float A,float B,float C)
{
  const float Pi = 3.141592653589793238;

  float P;
  P = (A + B + C) / 2;

  float T;
  T = (A * B * C) / (4 * sqrt(P * (P - A) * (P - B) * (P - C)));
  float Area = Pi * pow(T,2);

  return Area;
}

void PrintResult(float Area)
{
  cout << "Circle Area Is : " << Area << endl;
}

int main()
{
  float A;
  float B;
  float C;

  ReadTriangledata(A,B,C);
  PrintResult(CircleAriaByTriangle(A,B,C));
  return 0;
}
