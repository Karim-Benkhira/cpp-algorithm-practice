#include <iostream>
#include <cstdlib>

using namespace std;

int ReadRandom(int From,int To)
{
    int Random = rand() % (To - From + 1) + From;
    return Random;
}

void ArrayElement(int array[100],int &arrayLength)
{
    cout << "\nPlesae Enter a Number of Element : " << endl;
    cin >> arrayLength;

    for(int i = 0;i < arrayLength;i++)
    {
        array[i] = ReadRandom(1,100);
    }
}

void PrintArrayElent(int array[100],int arrayLength)
{
    for(int i = 0;i < arrayLength;i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

int MinNumberofelement(int array[100],int arrayLength)
{
    int Min = 0;

    for(int i = 0;i < arrayLength;i++)
    {
        if(array[i] < array[i+1])
        {
            Min = array[i];
            array[i] = array[i + 1];
            array[i+1] = Min;
        }
    }
    return Min;
}

int main()
{
    srand((unsigned)time(NULL));
    int array[100],arralength;

    ArrayElement(array,arralength);
    cout << "\nArray Element : \n";
    PrintArrayElent(array,arralength);

    cout << "\nMin Number is : ";
    cout << MinNumberofelement(array,arralength) << endl;

    return 0;
}
