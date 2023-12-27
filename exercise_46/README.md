# Secure Login System

This C++ program implements a secure login system with a PIN code. The user is prompted to enter a PIN code, and upon successful login, the program displays the account balance.

## Description

The program consists of two functions:

### `ReadPinCode` Function:

- Takes no parameters.
- Prompts the user to enter a PIN code.
- Returns the entered PIN code as a string.

### `Login` Function:

- Uses the `ReadPinCode` function to get the user's input.
- Checks if the entered PIN code is correct (e.g., "1234").
- Returns a boolean value indicating whether the login was successful.

## How to Use

1. Ensure you have a C++ compiler installed on your system.
2. Clone the repository to your local machine.
3. Open the file named "main.cpp" in your preferred text editor.
4. Compile the program using your C++ compiler.
5. Run the executable.

## Program Structure

### `main` Function:

The main entry function checks the login status using the `Login` function. If the login is successful, it displays the account balance.

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
  if (Login())
  {
    system("color 2F");
    cout << "Your Account balance is : " << 75000 << endl;
  }
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
