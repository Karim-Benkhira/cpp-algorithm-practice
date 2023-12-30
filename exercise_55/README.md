# Digit Frequency Counter

This C++ program counts the frequency of a specified digit in a positive number.

## Description

The program consists of two functions:

### `ReadNumbers` Function:

- Takes a string message as a parameter.
- Prompts the user to enter a positive number.
- Returns the entered number.

### `countDigitFrequency` Function:

- Takes two integers, `Number` and `digit`, as parameters.
- Counts and returns the frequency of the specified `digit` in the given `Number`.

## How to Use

1. Ensure you have a C++ compiler installed on your system.
2. Clone the repository to your local machine.
3. Open the file named "main.cpp" in your preferred text editor.
4. Compile the program using your C++ compiler.
5. Run the executable.

## Program Structure

### `main` Function:

The main entry function prompts the user to enter a positive number and a digit to check. It then calls `countDigitFrequency` to calculate and display the frequency of the specified digit in the entered number.

## Modifying the Program

If you want to customize the program or add additional features, you can modify the code in the "main.cpp" file.

## Example

```cpp
#include <iostream>
#include <iostream>

using namespace std;

int ReadNumbers(string Messege)
{
  int Number;

  do {
    cout << Messege << endl;
    cin >> Number;
  } while(Number <= 0);
  return Number;
}

int countDigitFrequency(int Number,int digit)
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

int main()
{
  int ReadNumber = ReadNumbers("Please Enter a positive Number : ");
  int ReadDigit = ReadNumbers("Please Enter one digit to check : ");
  int counter = countDigitFrequency(ReadNumber,ReadDigit);

  cout << "Digit " << ReadDigit << " Frequency is "<< counter << " Time(s)"<< endl;

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
