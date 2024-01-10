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

void ReadElement(int array[100],int &arraylength)
{
    arraylength = ReadNumber("\nPlease Enter Number element : ");

    for(int i = 0;i < arraylength;i++)
    {
        array[i] = Random(1,100);
    }
}

void PrintElement(int array[100],int arraylength)
{
    cout << "\nArray element : " << endl;
    for(int i = 0;i < arraylength;i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

short FindNumberPositionInarray(int Number,int array[100],int arraylength)
{
    for(int i = 0;i < arraylength;i++)
    {
        if(array[i] == Number)
            return i;
    }
    return -1;
}

bool isNumberInArray(int Number,int array[100],int arraylength)
{
    return FindNumberPositionInarray(Number,array,arraylength) != -1;
}

int main()
{
    int array[100];
    int arraylength;
    int Number;

    ReadElement(array,arraylength);
    PrintElement(array,arraylength);

    Number = ReadNumber("\nPlease enter a number to search for?\n");
    cout << "\nNumber you are looking for is: " << Number << endl;
    if(!isNumberInArray(Number,array,arraylength))
        cout << "No, The number is not found :-(\n"; 
    else
    {
        cout << "Yes it is found :-)\n"; 
    }
    return 0;
}