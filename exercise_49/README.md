# Prime Numbers Printer

This C++ program determines whether a given number is prime or not and prints all prime numbers from 1 to the specified number.

## Description

The program consists of three functions:

### `ReadNumber` Function:

- Takes a string message as a parameter.
- Prompts the user to enter a positive number.
- Returns the entered number.

### `CheakPrimeOrNotPrime` Function:

- Takes an integer `Number` as a parameter.
- Checks whether the number is prime or not.
- Returns an enumeration value (`prime` or `Notprime`) indicating the result.

### `PrintPrimeNumbersfrom1ToN` Function:

- Takes an integer `Number` as a parameter.
- Prints all prime numbers from 1 to the specified number using the `CheakPrimeOrNotPrime` function.

## How to Use

1. Ensure you have a C++ compiler installed on your system.
2. Clone the repository to your local machine.
3. Open the file named "main.cpp" in your preferred text editor.
4. Compile the program using your C++ compiler.
5. Run the executable.

## Program Structure

### `main` Function:

The main entry function prompts the user to enter a positive number and then calls `PrintPrimeNumbersfrom1ToN` to display all prime numbers.

## Example

```cpp
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

enum enPrime_Notprime{prime= 1,Notprime = 2};

int ReadNumber(string Messege)
{
  int Number;
  do {
    cout << Messege << endl;
    cin >> Number;
  } while(Number <= 0);

  return Number;
}

enPrime_Notprime CheakPrimeOrNotPrime(int Number)
{
  int counter = 2;
  while(counter <= round(Number / 2))
  {
    if(Number % counter == 0)
      return enPrime_Notprime::Notprime;
    counter++;
  }
  return enPrime_Notprime::prime;
}

void PrintPrimeNumbersfrom1ToN(int Number)
{
  int counter = 1;
  while (counter <= Number)
  {
    if(CheakPrimeOrNotPrime(counter) == enPrime_Notprime::prime)
      cout << counter << endl;
    counter++;
  }
}

int main()
{
  PrintPrimeNumbersfrom1ToN(ReadNumber("Please Enter a positive Number : "));

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
