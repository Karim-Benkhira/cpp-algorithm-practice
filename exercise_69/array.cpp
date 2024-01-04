#include <iostream>
#include <string>

using namespace std;

int ReadNumber(string Messege)
{
    int Number;

    do
    {
        cout << Messege << endl;
        cin >> Number ;
    } while (Number <= 0);

    return Number;
}

void ReadArray(int array[100],int &arrLength)
{
    cout << "Please Enter Number of element : " << endl;
    cin >> arrLength;

    cout << "Enter array element : " << endl;

    for(int i = 0; i < arrLength; i++)
    {
        cout << "Element [" << i + 1 << "] : ";
        cin >> array[i];
    }
    cout << endl;
}

void PrintArray(int array[100],int arralength)
{
    for(int i = 0;i < arralength; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

int TimesRepeated(int Number,int array[100],int arralength)
{
    int counter = 0;
    for(int i = 0;i < arralength; i++)
    {
        if(Number == array[i])
            counter++;
    }
    return counter;
}

int main()
{
    int array[100],arralength,NumberTocheck;

    ReadArray(array,arralength);

    NumberTocheck = ReadNumber("PLease Enter the Number you want to check : ");

    cout << "\nOriginal array : ";
    PrintArray(array,arralength);

    cout << "Number " << NumberTocheck;
    cout << " is repeated : ";
    cout << TimesRepeated(NumberTocheck,array,arralength);
    cout << " Time(s)" << endl;
}