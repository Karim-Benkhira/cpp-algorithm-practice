#include <iostream>
#include <cmath>

using namespace std;

void ReadTriangleData(float &A,float &B)
{
  cout << "PLease Enter Triangle side A : " << endl;
  cin >> A;
  cout << "PLease Enter Triangle Base B : " << endl;
  cin >> B;
}

float CircleAreaByITriangle(float A,float B)
{
  const float Pi = 3.141592653589793238;
  float Area = Pi * (pow(B,2) / 4 ) * ((2 * A - B) / (2 * A + B));
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
  ReadTriangleData(A,B);
  PrintResult(CircleAreaByITriangle(A,B));
}
