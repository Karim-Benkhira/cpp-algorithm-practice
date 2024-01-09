#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int ReadNumber(string Messge)
{
    int Number;

    do
    {
        cout << Messge << endl,
        cin >> Number;
    } while (Number <= 0);
    return Number;
}

int Random(int From ,int To)
{
    int RandNB = rand() % (To - From + 1) + From;
    return RandNB;
}

void ReadElement(int Array[100],int &arraylength)
{
    arraylength = ReadNumber("Please Enter Number element : ");

    for(int i = 0;i <arraylength;i++)
    {
        Array[i] =Random(1,100);
    }
}

void PrintElement(int Array[100],int arraylength)
{
    for(int i = 0;i < arraylength;i++)
    {
        cout << Array[i] << " ";
    }
    cout << endl;
}

void ReverseElement(int array[100],int arraylength)
{
    int swp = 0;
    for(int i = 0;i < arraylength;i++)
    {
        for ( int j = 0; i < arraylength; j++)
        {
            if(array[i]  < array[i + 1])
                swp = array[i + 1];
        }
        cout << swp << " ";
        
    }
}

int main()
{
    int array[100],arraylength;

    ReadElement(array,arraylength);
    cout << "Array element : " << endl;
    PrintElement(array,arraylength);
    
    ReverseElement(array,arraylength);
    return 0;
}