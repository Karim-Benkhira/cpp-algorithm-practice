#include <iostream>
#include <cstdlib>

using namespace std;

int RanDom(int From,int To)
{
    int RandNB = rand() % (To - From + 1) + From;
    return RandNB;
}

void ReadRandomNumberarray(int array[],int &arraylength)
{
    cout << " Please Enter Number of element : "<< endl;
    cin >> arraylength;

    for(int i = 0;i < arraylength;i++)
    {
        array[i] = RanDom(1,100);
    }
}

void Printarray(int array[100],int arralength)
{
    for(int i = 0;i < arralength;i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

int main()
{
    srand((unsigned)time(NULL));

    int arrLength;
    int array[100];

    ReadRandomNumberarray(array,arrLength);
    cout << "Array Element : ";
    Printarray(array,arrLength);

    return 0;
    
}