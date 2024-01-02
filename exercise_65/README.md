# Simple Text Encryption and Decryption

This C++ program allows you to encrypt and decrypt text using a basic Caesar cipher algorithm. The user enters a text, and the program encrypts and decrypts it using a specified key.

## Description

The program uses a Caesar cipher to encrypt and decrypt the entered text. It includes three main functions:

- `ReadText`: Takes a string message, prompts the user to enter a text (including spaces), and returns the entered text.

- `EncyptText`: Takes a text and a short key, encrypts the text using a Caesar cipher, and returns the encrypted text.

- `DecryptText`: Takes an encrypted text and a short key, decrypts the text using a Caesar cipher, and returns the decrypted text.

## How to Use

1. Ensure you have a C++ compiler installed on your system.
2. Clone the repository to your local machine.
3. Open the file named "main.cpp" in your preferred text editor.
4. Compile the program using your C++ compiler.
5. Run the executable.

## Program Structure

### `ReadText` Function:

- Takes a string message as input and prompts the user to enter a text.
- Returns the entered text.

### `EncyptText` Function:

- Takes a text and a short key as input.
- Encrypts the text using a Caesar cipher.
- Returns the encrypted text.

### `DecryptText` Function:

- Takes an encrypted text and a short key as input.
- Decrypts the text using a Caesar cipher.
- Returns the decrypted text.

### `main` Function:

- Calls the `ReadText`, `EncyptText`, and `DecryptText` functions to execute the program.
- Displays the original text, encrypted text, and decrypted text.

## Modifying the Program

If you want to customize the program or change the key, you can modify the code in the "main.cpp" file.

## Example

```cpp
#include <iostream>
#include <string>

using namespace std;

string ReadText(string Messege)
{
    string Name;
    cout << Messege << endl;
    getline(cin,Name);
    return Name;
}

string EncyptText(string Name,short Key)
{
    for(int i = 0;i<= Name.length();i++)
    {
        Name[i] = (char)((int) Name[i] + Key);
    }
    return Name;
}

string DecryptText(string Text,short Key)
{
    for(int i = 0;i <= Text.length();i++)
    {
        Text[i] = (char)((int) Text[i] - Key);
    }
    return(Text);
}

int main()
{
    const short Key = 2;
    string Read = ReadText("PLease Enter text : ");
    string Encypt = EncyptText(Read,Key);
    string Decrypt = DecryptText(Encypt,Key);

    cout << "Text Befor enCryption : " << Read << endl;
    cout << "Text After Encryption : " << Encypt << endl;
    cout << "Text After Decryption : " << Decrypt << endl;

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
