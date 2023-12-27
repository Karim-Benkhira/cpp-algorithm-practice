#include <iostream>
#include <string>

using namespace std;

void PrintTableHeader()
{
  cout << endl << endl;
  cout << "\t\t\t";
  cout << "Multiplication Table from 1 to 10 :" << endl << endl;
  cout << "\t";
  for(int i = 1;i <= 10;i++)
  {
    cout << i << "\t";
  }
  cout << "\n___________________________________________________________________________________\n";
}

string ColumSeperator(int i)
{
  if(i < 10)
    return ("   |");
  else
    return ("  |");
}
void PrintMultiplicationsTable()
{
  PrintTableHeader();

  for(int i = 1;i <= 10;i++)
  {
    cout << " " << i << ColumSeperator(i) << "\t";
    for(int j = 1;j <= 10; j++)
    {
      cout << i * j << "\t";
    }
    cout << endl;
  }
}

int main()
{
  PrintMultiplicationsTable();

  return 0;
}
