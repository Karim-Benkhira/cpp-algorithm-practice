# ReadAgeBetween Program

This C++ program takes user input for their age, validates if the age is within a specified range (18 to 45), and then prints the result to the console.

## Description

The program consists of four functions:
- `ReadAge`: Takes no parameters and returns user input for their age.
- `ValidateNumberInRange`: Takes three parameters (`Number1`, `From`, and `To`) and returns a boolean value indicating whether `Number1` is within the range [`From`, `To`].
- `ReadAgeBetween`: Takes two parameters (`From` and `To`) and repeatedly calls `ReadAge` until a valid age within the specified range is entered.
- `PrintResult`: Takes an integer parameter `Age` and prints the age to the console.

The `main` function calls these functions to read a valid age within the specified range and then print the result.

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

int ReadAge()
{
  int Age;
  cout << "Please Enter Your Age: " << endl;
  cin >> Age;
  return Age;
}

bool ValidateNumberInRange(int Number1, int From, int To)
{
  return (Number1 >= From && Number1 <= To);
}

int ReadAgeBetween(int From, int To)
{
  int Age;
  do
  {
    Age = ReadAge();
  } while (!ValidateNumberInRange(Age, From, To));
  return Age;
}

void PrintResult(int Age)
{
  cout << "Your Age is : " << Age << endl;
}

int main()
{
  PrintResult(ReadAgeBetween(18, 45));
  return 0;
}
