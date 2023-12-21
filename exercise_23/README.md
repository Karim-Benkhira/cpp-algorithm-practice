# ValidateAge Program

This C++ program takes user input for their age, validates if the age is within a specified range (18 to 45), and then prints the result to the console.

## Description

The program consists of three functions:
- `ReadAge`: Takes no parameters and returns user input for their age.
- `ValidateNumberInRange`: Takes three parameters (`Number1`, `From`, and `To`) and returns a boolean value indicating whether `Number1` is within the range [`From`, `To`].
- `PrintResult`: Takes an integer parameter `Age` and prints whether the age is valid or invalid to the console.

The `main` function calls these functions to read the age, validate it, and then print the result.

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

void PrintResult(int Age)
{
  if (ValidateNumberInRange(Age, 18, 45))
    cout << Age << " Is a Valid Age." << endl;
  else
    cout << Age << " Is Invalid Age." << endl;
}

int main()
{
  PrintResult(ReadAge());
  return 0;
}
