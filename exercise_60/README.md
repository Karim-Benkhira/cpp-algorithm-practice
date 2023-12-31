# Inverted Pattern Printer

This C++ program takes a positive number as input and prints an inverted pattern where each row contains the same number equal to the row number.

## Description

The program consists of two functions:

### `ReadNumber` Function:

- Takes a string message as a parameter.
- Prompts the user to enter a positive number.
- Returns the entered number.

### `invertedPattern` Function:

- Takes an integer `Number` as a parameter.
- Prints an inverted pattern where each row contains the same number equal to the row number.

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

void invertedPattern(int Number)
{
  int counter = 1;
  while(counter <= Number)
  {
    for(int i = 1;i <= counter ;i++)
    {
      cout << counter;
    }
    cout << endl;
    counter++;
  }
}

int main()
{
  invertedPattern(ReadNumber("Please Enter a Positive Number : "));

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
