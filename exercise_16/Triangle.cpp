#include <iostream>

using namespace std;

void ReadNUmbers(int &A,int &H)
{
  cout << "PLease Enter TRiangle Base A : " << endl;
  cin >> A;
  cout << "PLease Enter Triangle height H : " << endl;
  cin >> H;
}

float TreangleArea(int A,int H)
{
  float Area;
  Area = (A / 2) * H;
  return Area;
}

void PrintTriangleArea(float Area)
{
  cout << "TRiangle Aria is : " << Area << endl;
}

int main()
{
  int A;
  int H;
  ReadNUmbers(A,H);
  PrintTriangleArea(TreangleArea(A,H));

  return (0);
}
