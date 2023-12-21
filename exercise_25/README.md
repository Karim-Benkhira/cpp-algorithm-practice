# PrintNumberRanges Program

This C++ program takes user input for a number, then prints the numbers in the range from 1 to the entered number using three different loops: `while`, `do-while`, and `for`.

## Description

The program consists of four functions:
- `ReadNumber`: Takes no parameters and returns user input for a number.
- `PrintRangeFrom1toN_while`: Takes an integer parameter `Number` and prints the numbers from 1 to `Number` using a `while` loop.
- `PrintRangeFrom1toN_DoWhile`: Takes an integer parameter `Number` and prints the numbers from 1 to `Number` using a `do-while` loop.
- `PrintRangeFrom1toN_For`: Takes an integer parameter `Number` and prints the numbers from 1 to `Number` using a `for` loop.

The `main` function calls these functions to read a number from the user and print the number ranges using different loop structures.

## How to Use

1. Ensure you have a C++ compiler installed on your system.
2. Clone the repository to your local machine.
3. Compile the program using your preferred C++ compiler.
4. Run the executable.

### Author

- **Name:** Karim Benkhira
- **Occupation:** Software Engineering Student
- **LinkedIn:** [karim-benkhira](https://linkedin.com/in/karim-benkhira-206597224)
- **GitHub:** [Karim-Benkhira](https://github.com/Karim-Benkhira)
- **Twitter:** [Karim_Benkhira](https://twitter.com/Karim_Benkhira)

### Cybersecurity Enthusiast

I am also passionate about ethical hacking and cybersecurity. Currently, I am a beginner in penetration testing and constantly learning new techniques to enhance my skills.

Feel free to connect with me on social media or check out my GitHub repositories!

--

## Example

```cpp
#include <iostream>

using namespace std;

int ReadNumber()
{
  int Number;
  cout << "Please Enter Your Number: " << endl;
  cin >> Number;
  return Number;
}

void PrintRangeFrom1toN_while(int Number)
{
  int Counter = 1;

  while (Counter <= Number) {
    cout << Counter << endl;
    Counter++;
  }
}

void PrintRangeFrom1toN_DoWhile(int Number)
{
  int Counter = 1;

  do {
    cout << Counter << endl;
    Counter++;
  } while (Counter <= Number);
}

void PrintRangeFrom1toN_For(int Number)
{
  for (int Counter = 1; Counter <= Number; Counter++)
  {
    cout << Counter << endl;
  }
}

int main()
{
  int Nb = ReadNumber();
  cout << "********************************" << endl;
  PrintRangeFrom1toN_while(Nb);
  cout << "********************************" << endl;
  PrintRangeFrom1toN_DoWhile(Nb);
  cout << "********************************" << endl;
  PrintRangeFrom1toN_For(Nb);
  cout << "********************************" << endl;

  return 0;
}
