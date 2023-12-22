# Power Calculator

This C++ program calculates the powers of a number. The program prompts the user to enter a number and then calculates its powers of 2, 3, and 4.

## Description

The program consists of two functions:
- `ReaNumber`: Prompts the user to enter a number and returns the entered number.
- `Powerof2_3_4`: Takes a number as a parameter and calculates its powers of 2, 3, and 4, then prints the results.
- `main`: The main function that calls the other functions to read a number from the user and calculate its powers.

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

## Example

```cpp
#include <iostream>

using namespace std;

int ReaNumber()
{
  int Number;
  cout << "PLease Enter Number : " << endl;
  cin >> Number;
  return Number;
}

void Powerof2_3_4(int number)
{
  int a,b,c;
  a = number * number;
  b = number * number *number * number ;
  c = number * number *number * number * number;

  cout << a << " " << b << " " << c << endl;
}

int main()
{
  Powerof2_3_4(ReaNumber());
  return 0;
}
