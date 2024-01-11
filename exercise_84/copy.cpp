#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int ReadNumber(string Messege)
{
    int Number;

    do
    {
        cout << Messege << endl;
        cin >> Number;
    } while (Number <= 0);
    return Number;
}

int Random(int From,int To)
{
    int RandNB = rand() % (To - From + 1) + From;
    return RandNB;
}

void ReadElement(int array[100],int &arralength)
{
    arralength = ReadNumber("\nPlease enter Number element : ");

    for(int i = 0;i < arralength;i++)
    {
        array[i] = Random(1,100);
    }
    cout << endl;
}

void PrintArray(int array[100],int arralength)
{
    for(int i = 0;i < arralength;i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

void AddElementInArray(int Number,int array[100],int &arralength)
{
    arralength++;
    array[arralength-1] = Number;
}

void CopyArray(int Arraysource[100],int arrayDestination[100],int arralength,int &arrayDestinationLength)
{
    for(int i = 0; i <arralength;i++)
    {
        AddElementInArray(Arraysource[i],arrayDestination,arrayDestinationLength);
    }
}

int main()
{
    srand((unsigned)time(NULL));

    int array[100];
    int array2[100];
    int arralength = 0;
    int array2length = 0;

    ReadElement(array,arralength);
    cout << "Array 1 Element : " << endl;
    PrintArray(array,arralength);

    CopyArray(array,array2,arralength,array2length);
    cout << "\nArray 2 Element : " << endl;
    PrintArray(array2,array2length);

    return 0;
}
