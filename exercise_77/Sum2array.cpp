#include <iostream>
#include <cstdlib>

using namespace std;

int Random(int From,int To)
{
    int RandNB = rand() % (To - From + 1) + From;
    return RandNB;
}

void ReadElementarray1(int array1[100],int &length)
{
    cout << "\nHow many elements : " << endl;
    cin >> length;

    for(int i = 0;i < length;i++)
    {
        array1[i] = Random(1,100);
    }
}

void Printelementarray1(int array1[100],int length)
{
    for(int i = 0;i < length;i++)
    {
        cout << array1[i] << " ";
    }
    cout << endl;
}

void ReadElementarray2(int array2[100],int arraylength)
{
    for(int i = 0;i < arraylength;i++)
    {
        array2[i] = Random(1,100);
    }
}

void Printelementarray2(int array2[100],int arraylength)
{
    for(int i = 0;i < arraylength;i++)
    {
        cout << array2[i] << " ";
    }
    cout << endl;
}

void SumArray1andArray2(int arra1[100],int array2[100],int arralength)
{
    int sum = 0;

    for(int i = 0;i < arralength;i++)
    {
        sum = arra1[i] + array2[i] ;
        cout << sum << " ";
        sum = 0;
    }
    cout << endl;
}

int main()
{
    srand((unsigned)time(NULL));

    int array1[100];
    int array2[100];
    int arralength;

    ReadElementarray1(array1,arralength);
    ReadElementarray2(array2,arralength);
    cout << "\nArray 1  elements : " << endl;
    Printelementarray1(array1,arralength);
    cout << "\nArray 2 elements : " << endl;
    Printelementarray2(array2,arralength);
    cout << "\nSum of Array 1 and array 2 elements : " << endl;
    SumArray1andArray2(array1,array2,arralength);

    return 0;
}
