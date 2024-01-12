#include <iostream>

using namespace std;

void fillArray(int array[100],int &arraylength)
{
    arraylength = 6;
    array[0] = 10;
    array[1] = 20;
    array[2] = 30;
    array[3] = 30;
    array[4] = 20;
    array[5] = 10;
}

void PrintArrayelement(int array[100],int arralength)
{
    for(int i = 0;i < arralength;i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

bool isPalindrome(int array[100],int length)
{
    for(int i = 0;i < length;i++)
    {
        if(array[i] != array[length - i - 1])
            return false;
    }
    return true;
}

void PrintResult(int array[100],int length)
{
    if(isPalindrome(array,length) == true)
        cout << "\nYes array is Palindrome " << endl;
    else
        cout << "No array is not Palindrome" << endl; 
}

int main()
{
    int array[100];
    int arraylength = 0;

    fillArray(array,arraylength);
    cout << "Array element : " << endl;
    PrintArrayelement(array,arraylength);
    PrintResult(array,arraylength);

    return 0;
}
