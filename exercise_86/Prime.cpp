#include <iostream>
#include <cstdlib>
#include <string>
#include <cmath>

using namespace std;
enum enPrime{Prime = 1,NotPrime = 2};

enPrime CheackPrime(int Number)
{
    int M = Number / 2;

    for(int i = 2;i <= M;i++)
    {
        if(Number % i == 0 )
            return enPrime::NotPrime;
    }
    return enPrime::Prime;
}
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

void ReadElement(int Array[100],int &ArrayLength)
{
    ArrayLength = ReadNumber("Please Enter Number element : ");

    for(int i = 0;i < ArrayLength;i++)
    {
        Array[i] = Random(1,100);
    }
    cout << endl;
}

void PrintElement(int Array[100],int ArrayLength)
{
    for(int i = 0;i <ArrayLength;i++)
    {
        cout << Array[i] << " ";
    }
    cout << endl;
}

void AddElementInArray(int Number,int Array[100],int &arralength)
{
    arralength++;
    Array[arralength-1] = Number;
}

void CopyPrimeNumbers(int ArraySource[100],int ArrayDestination[100],int ArrayLength,int &arrayDestinationLength)
{
    for(int i = 0;i < ArrayLength;i++)
    {
        if(CheackPrime(ArraySource[i]) == enPrime::Prime)
            AddElementInArray(ArraySource[i],ArrayDestination,arrayDestinationLength);
    }
}

int main()
{
    srand((unsigned)time(NULL));

    int Array1[100];
    int Array2[100];
    int array1length = 0;
    int array2length = 0;

    ReadElement(Array1,array1length);
    cout << "\nArray 1 element : " << endl;
    PrintElement(Array1,array1length);
    CopyPrimeNumbers(Array1,Array2,array1length,array2length);
    cout << "\nArray 2 Prime Numbers : " << endl;
    PrintElement(Array2,array2length);

    return 0;
}