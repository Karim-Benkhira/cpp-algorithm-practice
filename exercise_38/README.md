# Remainder Calculator

This C++ program calculates the remainder between the total bill and the total cash paid. The user is prompted to enter the total bill amount and the total cash paid, and the program calculates and displays the remainder.

## Description

The program consists of two functions:
- `ReadNumber`: Takes a string message, prompts the user to enter a positive number, and returns the entered number.
- `CalculateRemainder`: Takes the total bill amount and the total cash paid, and calculates the remainder (change) by subtracting the total bill from the total cash paid.

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
#include <string>

using namespace std;

float ReadNumber(string Message)
{
  float Number;
  do
  {
    cout << Message << endl;
    cin >> Number;
  } while (Number <= 0);
  return Number;
}

float CalculateRemainder(float TotalBill, float TotalCashPaid)
{
  return (TotalCashPaid - TotalBill);
}

int main()
{
  float TotalBill = ReadNumber("Please Enter Total Bill:");
  float TotalCashPaid = ReadNumber("Please Enter Total Cash Paid:");
  float Remainder = CalculateRemainder(TotalBill, TotalCashPaid);

  cout << "***********************************" << endl;
  cout << "Total Bill = " << TotalBill << endl;
  cout << "Total Cash Paid = " << TotalCashPaid << endl;
  cout << "***********************************" << endl;
  cout << "Remainder = " << Remainder << endl;
  cout << "***********************************" << endl;

  return 0;
}
