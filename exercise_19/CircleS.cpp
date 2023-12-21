#include <iostream>
#include <cmath>

using namespace std;

float ReadSquareSide()
{
  float A;
  cout << "Please Enter square side : " << endl;
  cin >> A;
  return A;
}

float CircleAreaInscrebedInsquare(float A)
{
  const float Pi = 3.141592653589793238;
  float Area = (Pi * pow(A,2)) / 4;
  return Pi;
}

void Printresult(float Area)
{
  cout << "Circle Area Is : " << Area << endl;
}

int main()
{
  int A;
  Printresult(CircleAreaInscrebedInsquare(ReadSquareSide()));
  return 0 ;
}
