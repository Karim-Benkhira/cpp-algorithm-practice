# Random Key Generator

This C++ program generates random keys based on different character types, including small letters, capital letters, special characters, and digits.

## Description

The program includes functions for generating random numbers, characters, words, and keys. It utilizes the `rand()` function to generate random values within specified ranges. Keys are generated with a combination of capital letters in groups of four, separated by hyphens.

## How to Use

1. Ensure you have a C++ compiler installed on your system.
2. Clone the repository to your local machine.
3. Open the file named "main.cpp" in your preferred text editor.
4. Compile the program using your C++ compiler.
5. Run the executable.

## Program Structure

### `ReadNumber` Function:

- Takes a string parameter, `Message`, for user input.
- Ensures the user enters a positive number greater than zero.
- Returns the entered number.

### `RandomNumber` Function:

- Takes two integer parameters, `From` and `To`, representing the range.
- Generates a random number within the specified range using the `rand()` function.
- Returns the generated random number.

### `GetRandomCharacter` Function:

- Takes an enumeration parameter, `CharType`, representing the type of character to generate.
- Uses the `RandomNumber` function to generate a random ASCII value based on the character type.
- Returns the generated random character.

### `GenerateWord` Function:

- Takes a character type and length as parameters.
- Calls `GetRandomCharacter` to generate characters and forms a string with the specified length.
- Returns the generated word.

### `GenerateKey` Function:

- Forms a key by concatenating four groups of capital letter words separated by hyphens.
- Calls `GenerateWord` to generate each group.
- Returns the formed key.

### `GenerateKeys` Function:

- Takes an integer parameter, `NumberOfKeys`, for the number of keys to generate.
- Calls `GenerateKey` and prints each generated key.

### `main` Function:

- Seeds the random number generator using `srand((unsigned)time(NULL))`.
- Calls `GenerateKeys` with user input for the number of keys to generate.

## Example

```cpp
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

```
### Author

- **Name:** Karim Benkhira
- **Occupation:** Software Engineering Student
- **LinkedIn:** [karim-benkhira](https://linkedin.com/in/karim-benkhira-206597224)
- **GitHub:** [Karim-Benkhira](https://github.com/Karim-Benkhira)
- **Twitter:** [Karim_Benkhira](https://twitter.com/Karim_Benkhira)

### Cybersecurity Enthusiast

I am also passionate about ethical hacking and cybersecurity. Currently, I am a beginner in penetration testing and constantly learning new techniques to enhance my skills.

Feel free to connect with me on social media or check out my GitHub repositories!