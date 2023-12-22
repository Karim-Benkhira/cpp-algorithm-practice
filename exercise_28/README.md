# SumEvenNumbers Program

This C++ program takes user input for a number `N` and calculates the sum of even numbers from 1 to `N` using three different loops: `while`, `do-while`, and `for`.

## Description

The program consists of six functions:
- `ReadNumber`: Takes no parameters and returns user input for a number.
- `ChekOddOrEven`: Takes an integer parameter and returns whether it is odd or even.
- `SumEvenNUmberFrom1toN_usingwhile`: Takes an integer parameter `N` and calculates the sum of even numbers from 1 to `N` using a `while` loop.
- `SumEvenNUmberFrom1toN_usingdowhile`: Takes an integer parameter `N` and calculates the sum of even numbers from 1 to `N` using a `do-while` loop.
- `SumEvenNUmberFrom1toN_usingfor`: Takes an integer parameter `N` and calculates the sum of even numbers from 1 to `N` using a `for` loop.
- `main`: The main function that calls the other functions to read a number from the user and calculate the sum of even numbers using different loop structures.

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

enum enOddorEven{odd = 1, Even = 2};

int ReadNumber()
{
  int Number;
  cout << "Please Enter Your Number : " << endl;
  cin >> Number;
  return Number;
}

enOddorEven ChekOddOrEven(int Number)
{
  if(Number % 2 == 0)
    return enOddorEven::Even;
  else
    return enOddorEven::odd;
}

int SumEvenNUmberFrom1toN_usingwhile(int N)
{
  int counter = 1;
  int sum = 0;

  cout << "Sum Even Numbers From 1 to N using while statement: " << endl;
  while (counter <= N) {
    if(ChekOddOrEven(counter) == enOddorEven::Even)
    {
      sum = sum + counter;
    }
    counter++;
  }
  return sum;
}

int SumEvenNUmberFrom1toN_usingdowhile(int N)
{
  int counter = 1;
  int sum = 0;

  cout << "Sum Even numbers from 1 to N using do-while statement: " << endl;
  do {
    if(ChekOddOrEven(counter) == enOddorEven::Even)
    {
      sum = sum + counter;
    }
    counter++;
  } while(counter <= N);
  return sum;
}

int SumEvenNUmberFrom1toN_usingfor(int N)
{
  int sum = 0;

  cout << "Sum even Numbers from 1 to N using for statement: " << endl;
  for(int counter = 1;counter <= N;counter++)
  {
    if(ChekOddOrEven(counter) == enOddorEven::Even)
    {
      sum = sum + counter;
    }
  }
  return sum;
}

int main()
{
  int N = ReadNumber();

  cout << "*****************************************************" << endl;
  cout << SumEvenNUmberFrom1toN_usingwhile(N) << endl;
  cout << "*****************************************************" << endl;
  cout << SumEvenNUmberFrom1toN_usingdowhile(N) << endl;
  cout << "*****************************************************" << endl;
  cout << SumEvenNUmberFrom1toN_usingfor(N) << endl;
  cout << "*****************************************************" << endl;

  return 0;
}
