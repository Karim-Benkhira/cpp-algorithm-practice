# Random Key Generator

This C++ program generates random keys consisting of a combination of uppercase letters, lowercase letters, special characters, and digits. It allows the user to specify the number of keys to generate and prints the generated keys.

## Description

The program defines an enumeration `encharType` representing character types such as small letters, capital letters, special characters, and digits. It includes functions to read a positive number from the user, generate a random number within a specified range, generate a random character based on its type, generate a random word of a given length with a specific character type, generate a random key consisting of four words, generate multiple keys, and print the generated keys.

## How to Use

1. Ensure you have a C++ compiler installed on your system.
2. Clone the repository to your local machine.
3. Open the file named "main.cpp" in your preferred text editor.
4. Compile the program using your C++ compiler.
5. Run the executable.

## Program Structure

### `ReadNumber` Function:

- Takes a string message as a parameter.
- Prompts the user to enter a positive number.
- Continues prompting until a positive number is entered.
- Returns the entered number.

### `Randomelement` Function:

- Takes two integers, `From` and `To`, as parameters.
- Generates a random number between `From` and `To`.
- Returns the random number.

### `GetRandomCharacter` Function:

- Takes a character type from the `encharType` enumeration as a parameter.
- Uses `Randomelement` to generate a random character of the specified type.
- Returns the random character.

### `GenerateWord` Function:

- Takes a character type and a length as parameters.
- Calls `GetRandomCharacter` to generate characters of the specified type.
- Combines the characters to form a word of the specified length.
- Returns the generated word.

### `GenerateKey` Function:

- Generates a key by concatenating four words, each generated using `GenerateWord` with a character type of capital letters.

### `Keys` Function:

- Takes an array of strings and its length as parameters.
- Calls `GenerateKey` to fill the array with keys.
- Prompts the user to enter the number of keys to generate.

### `PrintKeys` Function:

- Takes an array of strings and its length as parameters.
- Prints the elements of the array.

### `main` Function:

- Declares an array of strings and its length.
- Calls `Keys` to generate keys.
- Calls `PrintKeys` to print the generated keys.


## Example

```cpp
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
