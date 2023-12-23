# Sales Commission Calculator

This C++ program calculates the commission based on the total sales entered by the user. The program prompts the user to enter the total sales, determines the commission percentage based on the provided scale, and calculates the total commission.

## Description

The program consists of three functions:
- `ReadTotalSales`: Prompts the user to enter the total sales and returns the entered value.
- `GetComissionPercentage`: Takes the total sales as a parameter and returns the commission percentage based on the provided scale.
- `CalculateTotalComission`: Takes the total sales as a parameter, calls `GetComissionPercentage`, and returns the total commission.

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

float ReadTotalSales()
{
  float number;
  cout << "Please Enter a total sales : " << endl;
  cin >> number;
  return number;
}

float GetComissionPercentage(float totalSales)
{
  if(totalSales >= 1000000)
    return (0.01);
  else if(totalSales >= 500000)
    return(0.02);
  else if(totalSales >= 100000)
    return(0.03);
  else if(totalSales >= 50000)
    return (0.05);
  else
    return (0.00);
}

float CalculateTotalComission(float Total)
{
  return (GetComissionPercentage(Total) * Total );
}

int main()
{
  float Total = ReadTotalSales();

  cout << "Comission Percentage is : " << GetComissionPercentage(Total) << endl;
  cout << "Total Comission : " << CalculateTotalComission(Total) << endl;
}
