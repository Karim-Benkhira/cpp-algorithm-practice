#include <iostream>
#include <cstdlib>

using namespace std;

int Random(int From,int To)
{
    int RandNb = rand() % (To - From + 1 ) + From;
    return RandNb;
}

void ReadArrayelement(int array[100],int &arrayLength)
{
    cout << "\nPlease Enter a Number of element : " << endl;
    cin >> arrayLength;

    for(int i = 0;i < arrayLength;i++)
    {
        array[i] = Random(1,100);
    }
}

void PrintElement(int array[100],int arrayLength)
{
    for(int i = 0;i < arrayLength;i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

int SumElement(int array[100],int arrayLength)
{
    int sum = 0;

    for(int i = 0;i < arrayLength;i++)
    {
        sum = sum + array[i];
    }
    return sum;
}

int main()
{
    srand((unsigned)time(NULL));
    int array[100],arraylength;

    ReadArrayelement(array,arraylength);
    cout << "\nArray Element : \n" << endl;
    PrintElement(array,arraylength);

    cout << "\nSum of all Number is : " ;
    cout << SumElement(array,arraylength) << endl;

}