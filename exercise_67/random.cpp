#include <iostream>
#include <cstdlib>

using namespace std;

int RandomNumber(int From,int To)
{
    int RandNb = rand() % (To - From + 1) + From;
    return RandNb;
}

enum enCharType{smallLetre = 1,CapitalLetere = 2, SpicialCharacter = 3,Digit = 4};

char GetRandomCharacter(enCharType CharType)
{
    switch (CharType)
    {
    case enCharType::smallLetre:
    {
        return char(RandomNumber(97,122));
        break;
    }
    case enCharType::CapitalLetere:
    {
        return char(RandomNumber(65,90));
        break;
    }
    case enCharType::SpicialCharacter:
    {
        return  char(RandomNumber(33,47));
        break;
    }
    case enCharType::Digit:
    {
        return char(RandomNumber(48,57));
        break;
    }
    default:
        return '\0';
    }
}

int main()
{
    srand((unsigned)time(NULL));
    
    cout << GetRandomCharacter(enCharType::smallLetre) << endl;
    cout << GetRandomCharacter(enCharType::CapitalLetere) << endl;
    cout << GetRandomCharacter(enCharType::SpicialCharacter) << endl;
    cout << GetRandomCharacter(enCharType::Digit) << endl;
}