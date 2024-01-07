#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int ReadNumber(string Messege )
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

void Swap(int &A,int &B)
{
    int tmp;

    tmp = A;
    A = B;
    B = tmp;
}

void ReadElement(int array[100],int &Numberlength)
{
    Numberlength = ReadNumber("\nPlease enter a Number element : ");
    for(int i = 0;i < Numberlength;i++)
    {
        array[i] = i+1;
    }
}

void Printelement(int array[100],int Numberlength)
{
    for(int i = 0;i < Numberlength ;i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

void shuffleElement(int array[100],int arraylength)
{
    for(int i = 0;i < arraylength;i++)
    {
        Swap(array[Random(1,arraylength) - 1] ,array[Random(1,arraylength) - 1]);
    }
}

void PrintShuffle(int array[100],int arraylength)
{
    for(int i = 0;i < arraylength;i++)
    {
        cout << array[i] << " ";
    }
    cout << endl << endl;
}

int main()
{
    srand((unsigned)time(NULL));
    
    int array[100];
    int Numberlength;

    ReadElement(array,Numberlength);
    cout << "\nArray element befor shuffle : " << endl;
    Printelement(array,Numberlength);

    shuffleElement(array,Numberlength);
    cout << "\nArray element after shuffle : " << endl;
    PrintShuffle(array,Numberlength);

    return 0;
}