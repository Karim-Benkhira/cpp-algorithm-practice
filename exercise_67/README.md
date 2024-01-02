# Random Character Generator

This C++ program generates random characters based on different character types, including small letters, capital letters, special characters, and digits.

## Description

The program includes a function `RandomNumber` that generates a random number within a specified range using the `rand()` function. Additionally, there's a function `GetRandomCharacter` that takes an enumeration `enCharType` representing different character types and returns a random character of that type.

## How to Use

1. Ensure you have a C++ compiler installed on your system.
2. Clone the repository to your local machine.
3. Open the file named "main.cpp" in your preferred text editor.
4. Compile the program using your C++ compiler.
5. Run the executable.

## Program Structure

### `RandomNumber` Function:

- Takes two integer parameters, `From` and `To`, representing the range.
- Generates a random number within the specified range using the `rand()` function.
- Returns the generated random number.

### `GetRandomCharacter` Function:

- Takes an enumeration parameter, `CharType`, representing the type of character to generate.
- Uses the `RandomNumber` function to generate a random ASCII value based on the character type.
- Returns the generated random character.

### `main` Function:

- Seeds the random number generator using `srand((unsigned)time(NULL))`.
- Calls the `GetRandomCharacter` function to generate and print random characters for different character types.



## Example

```cpp
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