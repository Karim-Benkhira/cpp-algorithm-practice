#include <iostream>
#include <cmath>

using namespace std;

float ReadDiameter()
{
  float D;
  cout << "Please Enter Diameter D : " << endl;
  cin >> D;
  return D;
}

float CircleAreaByDeamter(float D)
{
  const float Pi = 3.141592653589793238;
  float Area = (Pi * pow(D,2)) / 4;
  return Area;
}

void PrintResult(float Area)
{
  cout << "Circle Area Is : " << Area << endl;
}

int main()
{
  PrintResult(CircleAreaByDeamter(ReadDiameter()));
  return 0 ;
}
