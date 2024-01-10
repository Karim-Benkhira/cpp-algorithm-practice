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

void searchNumberinElement(int array[100],int NumberSerch,int arraylength)
{
    NumberSerch = ReadNumber("\nPlease Enter a Number To search for?");

    for(int i = 0;i < arraylength;i++)
    {
        if(array[i] == NumberSerch)
        {
            cout << "\nNumber you are looking for is : " << NumberSerch << endl;
            cout << "The Number found at Position : " << i << endl;
            cout << "The NUmber found its order : " << i+1 << endl;
            return;
        }
    }

     cout << "\nNumber you are looking for is : " << NumberSerch << endl;
     cout << "The Number is not found :-(" << endl;
}

int main()
{
    srand((unsigned)time(NULL));

    int array[100];
    int arraylength;
    int Numberserch;

    ReadElement(array,arraylength);
    PrintElement(array,arraylength);
    searchNumberinElement(array,Numberserch,arraylength);
}
