# Letter Combination Printer

This C++ program prints all possible combinations of three uppercase letters from AAA to ZZZ.

## Description

The program uses three nested loops to generate combinations of letters ranging from A to Z. The combinations are printed in the order from AAA to ZZZ.

## How to Use

1. Ensure you have a C++ compiler installed on your system.
2. Clone the repository to your local machine.
3. Open the file named "main.cpp" in your preferred text editor.
4. Compile the program using your C++ compiler.
5. Run the executable.

## Program Structure

### `PrintallwordsFromAAAtoZZZ` Function:

- Uses three nested loops to iterate through all combinations of letters from A to Z.
- Prints each combination on a new line.

### `main` Function:

- Calls the `PrintallwordsFromAAAtoZZZ` function to execute the program.

## Modifying the Program

If you want to customize the program or adjust the range of letters, you can modify the code in the "main.cpp" file.

## Example

```cpp
#include <iostream>
#include <string>

using namespace std;

void PrintallwordsFromAAAtoZZZ()
{
  int Letter = 1;

  while(Letter <= 26)
  {
    for(int i = 1; i <= 26;i++)
    {
      for(int j = 1; j<= 26;j++)
      {

          cout << (char)(Letter + 64)
               << (char)(i + 64)
               << (char)(j + 64)
               << endl;
      }
    }
    Letter++;
  }
}

int main()
{
  PrintallwordsFromAAAtoZZZ();

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
