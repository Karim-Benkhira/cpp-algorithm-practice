# Loan Payment Calculator

This C++ program is a simple loan payment calculator that calculates the total number of months required to pay off a loan. The user is prompted to enter the loan amount and the monthly installment.

## Description

The program consists of two functions:

### `ReadNumber` Function:

- Takes a string message as a parameter.
- Prompts the user to enter a number, ensuring that the entered number is greater than zero.
- Returns the entered number.

### `TotalMonth` Function:

- Takes the loan amount and monthly installment as parameters.
- Calculates and returns the total number of months required to pay off the loan.

## How to Use

1. Ensure you have a C++ compiler installed on your system.
2. Clone the repository to your local machine.
3. Open the file named "main.cpp" in your preferred text editor.
4. Compile the program using your C++ compiler.
5. Run the executable.

## Program Structure

### `main` Function:

The main entry function prompts the user to enter the loan amount and monthly installment. It then calls the `TotalMonth` function to calculate and display the total number of months required to pay off the loan.

## Modifying the Program

If you want to customize the program or add additional features, you can modify the code in the "main.cpp" file.

## Example

```cpp
#include <iostream>
#include <string>

using namespace std;

// ... (Your code)

int main()
{
  int LoanAmount = ReadNumber("Please Enter Loan Amount : ");
  int MonthlyInstalement = ReadNumber("Please Enter Monthly Installment : ");

  cout << "Total Month to Pay = " << TotalMonth(LoanAmount, MonthlyInstalement);
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
