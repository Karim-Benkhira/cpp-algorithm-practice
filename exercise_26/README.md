# ReversePrintNumberRanges Program

This C++ program takes user input for a number, then prints the numbers in the range from N to 1 using three different loops: `while`, `do-while`, and `for`.

## Description

The program consists of four functions:
- `ReadNumber`: Takes no parameters and returns user input for a number.
- `PrintRangeFromNto1_usingWhile`: Takes an integer parameter `N` and prints the numbers from `N` to 1 using a `while` loop.
- `PrintRangefromNto1_usingDowhile`: Takes an integer parameter `N` and prints the numbers from `N` to 1 using a `do-while` loop.
- `PrintRangefromNto1_usingfor`: Takes an integer parameter `N` and prints the numbers from `N` to 1 using a `for` loop.

The `main` function calls these functions to read a number from the user and print the reverse number ranges using different loop structures.

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

void PrintRangeFromNto1_usingWhile(int N)
{
  int counter = N;

  cout << "Range From N to 1 Using While Statement : " << endl;
  while (counter >= 1)
  {
    cout << counter << endl;
    counter--;
  }
}

void PrintRangefromNto1_usingDowhile(int N)
{
  int counter = N;

  cout << "Range From N to 1 using do-while Statement : " << endl;
  while (counter >= 1)
  {
    cout << counter << endl;
    counter--;
  }
}

void PrintRangefromNto1_usingfor(int N)
{
  cout << "Range From N to 1 using for Statement : " << endl;
  for (int counter = N; counter >= 1; counter--)
  {
    cout << counter << endl;
  }
}

int main()
{
  int N = ReadNumber();
  cout << "********************************************" << endl;
  PrintRangeFromNto1_usingWhile(N);
  cout << "********************************************" << endl;
  PrintRangefromNto1_usingDowhile(N);
  cout << "********************************************" << endl;
  PrintRangefromNto1_usingfor(N);
  cout << "********************************************" << endl;

  return 0;
}
