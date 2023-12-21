#include <iostream>
#include <cmath>
using namespace std;

void ReadNumbers(int &A,int &D)
{
  cout << "Please Enter Reactangle side A : " << endl;
  cin >> A;
  cout << "PLease Enter Reactangle diagonal D : " << endl;
  cin >> D;
}

float ReactangleAreabySideandDiagonal(int A,int D)
{
  float Area;
  Area =  A * sqrt(pow(D,2) - pow(A,2));
  return Area;
}

void PrintResult(float Area)
{
  cout << "Rectangle Area is : " << Area << endl;
}

int main()
{
  int a;
  int d;
  ReadNumbers(a,d);
  PrintResult(ReactangleAreabySideandDiagonal(a,d));

  return 0 ;
}
