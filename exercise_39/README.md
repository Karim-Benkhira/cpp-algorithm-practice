# Total Bill Calculator

This C++ program calculates the total bill after adding service fees and sales tax. The user is prompted to enter the initial total bill amount, and the program calculates and displays the total bill after adding a 10% service fee and a 16% sales tax.

## Description

The program consists of two functions:
- `ReadNumber`: Takes a string message, prompts the user to enter a positive number, and returns the entered number.
- `TotalBillAfterServiceAndTax`: Takes the initial total bill amount, adds a 10% service fee, then adds a 16% sales tax, and returns the final total bill.

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

float TotalBillAfterServiceAndTax(float TotalBill)
{
  TotalBill = TotalBill * 1.1;   // Add 10% service fee
  TotalBill = TotalBill * 1.16;  // Add 16% sales tax
  return TotalBill;
}

int main()
{
  float TotalBill = ReadNumber("Please Enter Total Bill:");

  cout << "***********************************" << endl;
  cout << "Total Bill = " << TotalBill << endl;
  cout << "Total Bill After Service Fee and Sales Tax = " << TotalBillAfterServiceAndTax(TotalBill) << endl;
  cout << "***********************************" << endl;

  return 0;
}
