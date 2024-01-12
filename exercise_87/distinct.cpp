#include <iostream>

using namespace std;

void fillArray(int array[100],int &arralength)
{
    arralength = 10;
    array[0] = 10;
    array[1] = 10;
    array[2] = 10;
    array[3] = 50;
    array[4] = 50;
    array[5] = 70;
    array[6] = 70;
    array[7] = 70;
    array[8] = 70;
    array[9] = 90;
}

void PrintArrayelement(int array[100],int arralength)
{

    for(int i = 0;i < arralength;i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

int FindNUmberInArray(int Number,int array[100],int length)
{
    for(int i = 0;i < length;i++)
    {
        if(array[i] == Number)
            return i;
    }
    return -1;
}

bool isNUmberInArray(int Number,int array[100],int length)
{
    return FindNUmberInArray(Number,array,length) != -1;
}

void AddNumberInArray(int Number,int array[100],int &arraylength)
{
    arraylength++;
    array[arraylength-1] = Number;
}

void CopyDistinctElementInArray(int arraySource[100],int arrayDEstination[100],int arraylength,int &arrayDEstinationLngth)
{
    for(int i = 0;i < arraylength;i++)
    {
        if(!isNUmberInArray(arraySource[i],arrayDEstination,arrayDEstinationLngth))
            AddNumberInArray(arraySource[i],arrayDEstination,arrayDEstinationLngth);
    }
}

int main()
{
    int array1[100];
    int array2[100];
    int arra1length = 0;
    int arra2length = 0;

    fillArray(array1,arra1length);
    cout << "\nArray 1 element : " << endl;
    PrintArrayelement(array1,arra1length);
    CopyDistinctElementInArray(array1,array2,arra1length,arra2length);
    cout << "\nArray 2 distinct elements:\n";
    PrintArrayelement(array2,arra2length);

    return 0;
}
