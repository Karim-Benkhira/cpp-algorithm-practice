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

void ReadElement(int Array[100],int &arraylength)
{
    arraylength = ReadNumber("\nPlease Enter Number element : ");

    for(int i = 0;i < arraylength;i++)
    {
        Array[i] = Random(-100,100);
    }
}

void PrintElement(int Array[100],int arraylength)
{
    cout << "\nArray element : " << endl;

    for(int i = 0;i < arraylength;i++)
    {
        cout << Array[i] << " ";
    }
    cout << endl;
}

int CountPositiveNumber(int array[100],int arraylength)
{
    int count = 0;

    for(int i = 0;i < arraylength;i++)
    {
        if(array[i] >= 0)
            count++;
    }
    return count;
}

int main()
{
    srand((unsigned)time(NULL));

    int array[100];
    int arraylength = 0;
    
    ReadElement(array,arraylength);
    PrintElement(array,arraylength);
    cout << "\nPositive Number count is : " << endl;
    cout << CountPositiveNumber(array,arraylength) << endl;

    return 0;
}
