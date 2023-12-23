#include <iostream>

using namespace std;

float ReadTotalSales()
{
  float number;
  cout << "Please Enter a total sales : " << endl;
  cin >> number;
  return number;
}

float GetComissionPercentage(float totalSales)
{
  if(totalSales >= 1000000)
    return (0.01);
  else if(totalSales >= 500000)
    return(0.02);
  else if(totalSales >= 100000)
    return(0.03);
  else if(totalSales >= 50000)
    return (0.05);
  else
    return (0.00);
}

float CalculateTotalComission(float Total)
{
  return (GetComissionPercentage(Total) * Total );
}

int main()
{
  float Total = ReadTotalSales();

  cout << "Comission Percentage is : " << GetComissionPercentage(Total) << endl;
  cout << "Total Comission : " << CalculateTotalComission(Total) << endl;
}
