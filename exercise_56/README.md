# Digit Frequency Counter

This C++ program counts and prints the frequency of each digit (0-9) in a positive number.

## Description

The program consists of three functions:

### `ReadNumber` Function:

- Takes a string message as a parameter.
- Prompts the user to enter a positive number.
- Returns the entered number.

### `countDigitFrequency` Function:

- Takes two integers, `Number` and `digit`, as parameters.
- Counts and returns the frequency of the specified `digit` in the given `Number`.

### `PrintAllDigitFrequency` Function:

- Takes an integer `Number` as a parameter.
- Calls `countDigitFrequency` for each digit from 0 to 9 and prints the frequency.

## How to Use

1. Ensure you have a C++ compiler installed on your system.
2. Clone the repository to your local machine.
3. Open the file named "main.cpp" in your preferred text editor.
4. Compile the program using your C++ compiler.
5. Run the executable.


## Example

```cpp
#include <iostream>
#include <string>

using namespace std;

int ReadNumber(string Messege)
{
  int Number;
  do {
    cout << Messege << endl;
    cin >> Number;
  } while(Number <= 0);

  return Number;
}

int coutdigitFrequency(int Number,int digit)
{
  int Remainder = 0;
  int counter = 0;

  while(Number > 0)
  {
    Remainder = Number % 10;
    Number = Number / 10;
    if(Remainder == digit)
      counter++;
  }
  return counter;
}

void PrintAllDigitFrequency(int Number)
{
  for(int i = 0;i <= 9;i++)
  {
    short digitFrequency = 0;
    digitFrequency = coutdigitFrequency(Number,i);

    if(digitFrequency > 0)
      {
        cout << "Digit " << i << " Frequency is : " << digitFrequency << " Time(s)" << endl;
      }
  }
}

int main()
{
  int Number = ReadNumber("Please Enter a positive Number : ");

  PrintAllDigitFrequency(Number);

  return 0;
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
