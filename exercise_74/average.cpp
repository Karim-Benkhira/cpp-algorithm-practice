#include <iostream>
#include <cstdlib>

using namespace std;

int Random(int From,int To)
{
    int RandNb = rand() % (To - From + 1) + From;
    return RandNb;
}

void ReadElementrand(int array[100],int &arraylength)
{
    cout << "\nPlesae Enter a Number of Element : " << endl;
    cin >> arraylength;

    for(int i = 0;i < arraylength;i++)
    {
        array[i] = Random(1,100);
    }
}

void Printrandom(int array[100],int arralength)
{
    for(int i = 0;i < arralength;i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

int SumNumber(int array[100],int arraylength)
{
    int Sum = 0;

    for(int i = 0;i < arraylength;i++)
    {
        Sum = Sum + array[i];
    }
    return Sum;
}

float  AverageNumber(int array[100],int arraylength)
{
   return (float)SumNumber(array,arraylength) / arraylength;
}

int main()
{
    srand((unsigned)time(NULL));

    int array[100],arralength;

    ReadElementrand(array,arralength);
    cout << "\nArray Elements : \n";
    Printrandom(array,arralength);

    cout << "\nSum of all Number is : ";
    cout << SumNumber(array,arralength) << endl;
    cout << "\nAverage of all Number is  : ";
    cout << AverageNumber(array,arralength) << endl;;
}