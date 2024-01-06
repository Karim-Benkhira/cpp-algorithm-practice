#include <iostream>
#include <cstdlib>

using namespace std;

int Random(int From,int To)
{
    int RandNB = rand() % (To - From + 1) + From;
    return RandNB;
}

void Readelement(int array[100],int &arrayLength)
{
    cout << "\nPlease Enter a Number element : " << endl;
    cin >> arrayLength;

    for(int i = 0;i < arrayLength;i++)
    {
        array[i] = Random(1,100);
    }
}

void PrintNumbers(int array[100],int arrayLength)
{
    for(int i = 0;i < arrayLength;i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

bool IsPrime(int Number)
{
    if(Number <= 1)
        return false;
    
    for(int i = 2;i < Number / 2;i++)
    {
        if(Number % i == 0)
            return false;
    }
    return true;
}

void PrimeNumber(int array[100],int arrayLength)
{
    for(int i = 0;i < arrayLength;i++)
    {
        if(IsPrime(array[i]))
            cout << array[i] << " ";
    }
    cout << endl;
}


int main()
{
    srand((unsigned)time(NULL));

    int array[100];
    int arralength;

    Readelement(array,arralength);

    cout << "\nArray element : " << endl;
    PrintNumbers(array,arralength);

    cout << "\nPrime Number in Array : " << endl;
    PrimeNumber(array,arralength);
}