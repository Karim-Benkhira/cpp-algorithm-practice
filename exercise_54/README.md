# Reverse Digit Printer

This C++ program takes a positive number as input and prints its digits in reverse order.

## Description

The program consists of two functions:

### `ReadNumber` Function:

- Takes a string message as a parameter.
- Prompts the user to enter a positive number.
- Returns the entered number.

### `PrintReverseDigit` Function:

- Takes an integer `Number` as a parameter.
- Calculates and returns the reverse of the digits of the given number.

## How to Use

1. Ensure you have a C++ compiler installed on your system.
2. Clone the repository to your local machine.
3. Open the file named "main.cpp" in your preferred text editor.
4. Compile the program using your C++ compiler.
5. Run the executable.

## Program Structure

### `main` Function:

The main entry function prompts the user to enter a positive number, calls `PrintReverseDigit` to calculate the reverse of its digits, and then prints the result.

## Modifying the Program

If you want to customize the program or add additional features, you can modify the code in the "main.cpp" file.

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
    cout << endl;
  } while(Number <= 0);

  return Number;
}

int PrintRevirseDigit(int Number)
{
  int Remainder = 0;
  int NumberREv = 0;


  while(Number > 0)
  {
    Remainder = Number % 10;
    Number = Number / 10;
    NumberREv = NumberREv * 10 + Remainder;
  }
  return NumberREv;
}

int main()
{

  int REv = PrintRevirseDigit(ReadNumber("Please Enter a Positive Number : "));

  cout << "Reverse is : " << endl << REv << endl;

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
