#include <iostream>
#include <cstdlib>

using namespace std;

int random(int From,int To)
{
    int RandNB = rand() % (To - From + 1) + From;
    return RandNB;
}

void ReadElement(int array[100],int &arraylength)
{
    cout << "\nPlease Enter a Number of element : " << endl;
    cin >> arraylength;

    for(int i = 0;i < arraylength;i++)
    {
        array[i] = random(1,100);
    }
}

void PrintArray(int array[100],int arraylength)
{
    for(int i = 0;i < arraylength;i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

void CopyArray(int array[100],int arrDestination[100],int arraylength)
{
    for(int i = 0;i < arraylength;i++)
    {
        arrDestination[i] = array[i];
    }
}

int main()
{
    srand((unsigned)time(NULL));

    int array[100],arralength;
    int array2[100];

    CopyArray(array,array2,arralength);
    ReadElement(array,arralength);
    cout << "\nArray 1 element : \n";
    PrintArray(array,arralength);
    cout << "\nArray 2 element After copy : \n";
    PrintArray(array,arralength);

    return 0;
}