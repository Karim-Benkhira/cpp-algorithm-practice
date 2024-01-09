#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

enum encharType{smallLeter = 1,CapitalLeter = 2,SpicialCharacter = 3,Digit = 4};

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

int Randomelement(int From,int To)
{
    int RandNB = rand() % (To - From + 1 ) + From;
    return RandNB;
}

char GetRandomCharacter(encharType charType)
{
    switch (charType)
    {
    case encharType::smallLeter:
        return char(Randomelement(97,122));
        break;
    case encharType::CapitalLeter:
        return char(Randomelement(65,90));
        break;
    case encharType::SpicialCharacter:
        return char(Randomelement(33,47));
        break;
    case encharType::Digit:
        return char(Randomelement(48,57));
        break;
    default:
        return '\0';
        break;
    }
}

string GenerateWord(encharType charType,int length)
{
    string word;

    for(int i = 0;i <= length;i++)
    {
        word = word + GetRandomCharacter(charType);
    }
    return word;
}

string GenerateKey()
{
    string key;
    
    key = key + GenerateWord(encharType::CapitalLeter,4) + "-";
    key = key + GenerateWord(encharType::CapitalLeter,4) + "-";
    key = key + GenerateWord(encharType::CapitalLeter,4) + "-";
    key = key + GenerateWord(encharType::CapitalLeter,4);

    return key;
}

void Keys(string array[100],int &arraylength)
{
    arraylength = ReadNumber("\nPLease Enter a Number keys : ");

    for(int i = 0;i < arraylength;i++)
    {
        array[i] = GenerateKey();
    }
}

void PrintKeys(string array[100],int arraylength)
{
    for(int i = 0;i < arraylength;i++)
    {
        cout << "Array[" << i << "] : "<< array[i] << endl;
    }
}

int main()
{
    srand((unsigned)time(NULL));

    string  array[100];
    int arralength;

    Keys(array,arralength);
    cout << "\nArray elements: " << endl << endl;
    PrintKeys(array,arralength);
}
