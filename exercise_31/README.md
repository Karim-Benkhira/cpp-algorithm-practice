# Power Calculator

This C++ program calculates the power of a number. The program prompts the user to enter a number and its power, then calculates the result.

## Description

The program consists of three functions:
- `ReadNumber`: Prompts the user to enter a number and returns the entered number.
- `ReadPower`: Prompts the user to enter the power and returns the entered power.
- `Power`: Takes a number and a power as parameters and calculates the result of raising the number to the power.
- `main`: The main function that calls the other functions to read a number and its power from the user and calculate the result.

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

int ReadNumber()
{
  int Number;
  cout << "Please Enter Number : " << endl;
  cin >> Number;
  return Number;
}

int ReadPower()
{
  int number;
  cout << "PLease Enter the power : " << endl;
  cin >> number;
  return number;
}

int Power(int number,int pow)
{
  int p = 1;
  if(pow == 0)
  {
    return (1);
  }
  for(int i = 1;i <= pow ;i++)
  {
    p = p * number;
  }
  return p;
}

int main()
{
  cout << Power(ReadNumber(),ReadPower()) << endl;

  return 0;
}
