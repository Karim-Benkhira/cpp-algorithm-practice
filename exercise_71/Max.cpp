#include <iostream>
#include <cstdlib>

using namespace std;

int RanDom(int From,int To)
{
    int RandNB = rand() % (To - From + 1) + From;
    return RandNB;
}

void ReadRandomNumberarray(int array[100],int &arraylength)
{
    cout << "Please Enter Number of Element : " << endl;
    cin >> arraylength;

    for(int i = 0;i < arraylength;i++)
    {
        array[i] = RanDom(1,100);
    }
}

int CheakMaxNumber(int array[100],int arralength)
{
    int swp = 0;
    for(int i = 0;i < arralength;i++)
    {
        if(array[i] > array[i+1])
        {
            swp = array[i];
            array[i] = array[i+1];
            array[i+1] = swp;
        }
    }
    return swp;
}

void Printarray(int array[100],int arrLength)
{
    for(int i = 0;i < arrLength;i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

int main()
{
    srand((unsigned)time(NULL));

    int array[100],arraylength;

    ReadRandomNumberarray(array,arraylength);
    cout << "\nArray Element : " << endl;
    Printarray(array,arraylength);

    cout << "\nMax Element is : "<< CheakMaxNumber(array,arraylength) << endl;
}