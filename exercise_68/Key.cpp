#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

enum encharType{SmallLeter = 1,CapitalLeter = 2,SpicialCharacter = 3,Digit = 4};

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

int RandomNumber(int From,int To)
{
    int RandNb = rand() % (To - From + 1 ) + From;
    return RandNb;
}

char GetRandomCharacter(encharType charType)
{
    switch (charType)
    {
    case encharType::SmallLeter:
        return char (RandomNumber(97,122));
        break;
    case encharType::CapitalLeter:
        return char(RandomNumber(65,90));
        break;
    case encharType::SpicialCharacter:
        return char(RandomNumber(33,47));
        break;
    case encharType::Digit:
        return char(RandomNumber(48,57));
        break;
    default:
        return '\0';
        break;
    }
}

string GenerateWord(encharType chartype,short Length)
{
    string word;

    for(int i = 1;i <= Length;i++)
    {
        word = word + GetRandomCharacter(chartype);
    }
    return word;
}

string GenerateKe()
{
    string Key = "";

    Key = Key + GenerateWord(encharType::CapitalLeter,4) + "-";
    Key = Key + GenerateWord(encharType::CapitalLeter,4) + "-";
    Key = Key + GenerateWord(encharType::CapitalLeter,4) + "-";
    Key = Key + GenerateWord(encharType::CapitalLeter,4);

    return Key;
}

void GenerateKeys(int NumberOfKeys)
{
    for(int i = 1; i <= NumberOfKeys;i++)
    {
        cout << "Key [" << i << "] : ";
        cout << GenerateKe() << endl;
    }
}

int main()
{
    srand((unsigned)time(NULL));

    GenerateKeys(ReadNumber("PLesae Enter how many keys to Generate : "));
}