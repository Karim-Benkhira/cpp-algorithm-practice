# Piggy Bank Total Calculator

This C++ program calculates the total amount of money in a piggy bank based on the user's input of the number of pennies, nickels, dimes, quarters, and dollars. The program prompts the user to enter the quantity of each coin and then calculates the total value in pennies.

## Description

The program uses a structure `stPiggyBankContent` to store the quantity of each coin. It consists of two functions:
- `ReadPiggyBankContent`: Prompts the user to enter the quantity of each coin and returns a structure containing this information.
- `CalculateTotalPennies`: Takes a `stPiggyBankContent` structure as a parameter, calculates the total value in pennies, and returns the result.

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

struct stPiggyBankContent
{
  int Pennis, Nickels, Dimes, Quarters, Dollars;
};

stPiggyBankContent ReadPiggyBankContent()
{
  stPiggyBankContent PiggyBankContent;

  cout << "Please Enter the Total Pennies : " << endl;
  cin >> PiggyBankContent.Pennis;
  cout << "Please Enter the Total Nickels : " << endl;
  cin >> PiggyBankContent.Nickels;
  cout << "Please Enter the Total Dimes : " << endl;
  cin >> PiggyBankContent.Dimes;
  cout << "Please Enter the Total Quarters : " << endl;
  cin >> PiggyBankContent.Quarters;
  cout << "Please Enter the Total Dollars : " << endl;
  cin >> PiggyBankContent.Dollars;

  return PiggyBankContent;
}

int CalculateTotalPennies(stPiggyBankContent PiggyBankContent)
{
  return PiggyBankContent.Pennis * 1 + PiggyBankContent.Nickels * 5 + PiggyBankContent.Dimes * 10 +
         PiggyBankContent.Quarters * 25 + PiggyBankContent.Dollars * 100;
}

int main()
{
  stPiggyBankContent PiggyBankContent = ReadPiggyBankContent();
  int TotalPennies = CalculateTotalPennies(PiggyBankContent);

  cout << "Total Pennies: " << TotalPennies << endl;
  cout << "Total Dollars: $" << (float)TotalPennies / 100 << endl;

  return 0;
}
