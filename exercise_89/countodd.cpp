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
    int RadNB = rand() % (To - From + 1) + From;
    return RadNB;
}

void ReadElement(int array[100],int &arraylength)
{
    arraylength = ReadNumber("Please Enter element : ");

    for(int i = 0;i < arraylength;i++)
    {
        array[i] = Random(1,100);
    }
    cout << endl;
}

void PrintElement(int array[100],int arraylength)
{
    cout << "Array element : " << endl;

    for(int i = 0;i < arraylength;i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

int IsOddNumber(int array[100],int length)
{
    int count = 0;

    for(int i = 0;i < length;i++)
    {
        if(array[i] % 2 != 0)
            count++;
    }
    return count;
}

int main()
{
    srand((unsigned)time(NULL));

    int array[100];
    int length = 0;

    ReadElement(array,length);
    PrintElement(array,length);
    cout << "\nOdd Numbers Count is : " << endl;
    cout << IsOddNumber(array,length);
    cout << endl;

    return 0;
}
