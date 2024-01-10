#include <iostream>
#include <cstdlib>

using namespace std;

int ReadNumber()
{
    int Number;

    do
    {
        cout << "\nPlease enter a number? " << endl;
        cin >> Number;
    } while (Number <= 0);

    return Number;
}

void AddElementInArray(int Number,int array[100],int &arralength)
{
    arralength++;
    array[arralength-1] = Number;
}

void InputUserNumbersInarray(int array[100],int &arralength)
{
    bool AddMore = true;

    do
    {
        AddElementInArray(ReadNumber(),array,arralength);
        cout << "\nDo You want to add more Numbers ? [0]:No,[1]:Yes " << endl;
        cin >> AddMore;
    } while (AddMore);
    
}

void PrintArray(int array[100],int arralength)
{
    cout << "\nArray element : " << endl;

    for(int i = 0;i < arralength;i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

int main()
{
    int array[100];
    int arralength;

    InputUserNumbersInarray(array,arralength);

    cout << "\nArray Length: " << arralength << endl;
    PrintArray(array,arralength);


}