#include <iostream>
#include <cmath>

using namespace std;

float ReadCircumfrence()
{
  float L;
  cout << "Please Enter Circumfrence : " << endl;
  cin >> L;
  return L;
}

float CircleAreaByCircumfrence(float L)
{
  const float Pi = 3.141592653589793238;
  float Area = pow(L,2) * (4 * Pi);
  return Area;
}

void PrintResult(float Area)
{
  cout << "Circle Area is : " << Area << endl;
}

int main()
{
  PrintResult(CircleAreaByCircumfrence(ReadCircumfrence()));
  return 0;
}
