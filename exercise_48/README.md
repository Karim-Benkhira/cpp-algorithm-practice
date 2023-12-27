# Multiplications Table Printer

This C++ program generates and prints a multiplication table from 1 to 10. It's a simple utility to visualize the multiplication values.

## Description

The program consists of two functions:

### `PrintTableHeader` Function:

- Prints the header of the multiplication table, including column labels.

### `PrintMultiplicationsTable` Function:

- Calls `PrintTableHeader` to display the table header.
- Generates and prints the multiplication table from 1 to 10.

## How to Use

1. Ensure you have a C++ compiler installed on your system.
2. Clone the repository to your local machine.
3. Open the file named "main.cpp" in your preferred text editor.
4. Compile the program using your C++ compiler.
5. Run the executable.

## Program Structure

### `main` Function:

The main entry function calls `PrintMultiplicationsTable` to display the multiplication table.

## Modifying the Program

If you want to customize the program or extend the multiplication range, you can modify the code in the "main.cpp" file.

## Example

```cpp
#include <iostream>
#include <string>

using namespace std;

void PrintTableHeader()
{
  cout << endl << endl;
  cout << "\t\t\t";
  cout << "Multiplication Table from 1 to 10 :" << endl << endl;
  cout << "\t";
  for(int i = 1;i <= 10;i++)
  {
    cout << i << "\t";
  }
  cout << "\n___________________________________________________________________________________\n";
}

string ColumSeperator(int i)
{
  if(i < 10)
    return ("   |");
  else
    return ("  |");
}
void PrintMultiplicationsTable()
{
  PrintTableHeader();

  for(int i = 1;i <= 10;i++)
  {
    cout << " " << i << ColumSeperator(i) << "\t";
    for(int j = 1;j <= 10; j++)
    {
      cout << i * j << "\t";
    }
    cout << endl;
  }
}

int main()
{
  PrintMultiplicationsTable();

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
