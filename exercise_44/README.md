# Simple Letter Printer

This C++ program is a straightforward application that prints letters from 'A' to 'Z'. It serves as a basic example to showcase function creation and usage in C++.

## How to Use the Program

1. Ensure you have a C++ compiler installed on your system.
2. Clone the repository to your local machine.
3. Open the file named "main.cpp" in your preferred text editor.
4. Compile the program using your C++ compiler.
5. Run the executable.

## Program Structure

### `PrintLettersAtoZ` Function:

A function designed to print letters from 'A' to 'Z' using a for loop.

### `main` Function:

The main entry function that calls `PrintLettersAtoZ` to print the letters.

### Author

- **Name:** Karim Benkhira
- **Occupation:** Software Engineering Student
- **LinkedIn:** [karim-benkhira](https://linkedin.com/in/karim-benkhira-206597224)
- **GitHub:** [Karim-Benkhira](https://github.com/Karim-Benkhira)
- **Twitter:** [Karim_Benkhira](https://twitter.com/Karim_Benkhira)

### Cybersecurity Enthusiast

I am also passionate about ethical hacking and cybersecurity. Currently, I am a beginner in penetration testing and constantly learning new techniques to enhance my skills.

Feel free to connect with me on social media or check out my GitHub repositories!

## Modifying the Program

If you wish to change the range of letters to be printed, you can adjust the minimum and maximum values in the for loop within the `PrintLettersAtoZ` function.

```cpp
// Change 'A' and 'Z' to the letters you desire
for(char alpha = 'A'; alpha <= 'Z'; alpha++)
{
  cout << alpha << endl;
}
