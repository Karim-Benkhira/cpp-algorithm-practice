# Array Number Search

This C++ program allows the user to generate an array of random numbers and search for a specific number within the array. It prompts the user to enter the number of elements in the array, generates random numbers within a specified range, prints the generated array, and then prompts the user to enter a number to search for within the array.

## Description

The program includes functions to read a positive number from the user, generate a random number within a specified range, read elements into an array, print the elements of an array, and search for a specific number within the array.

## How to Use

1. Ensure you have a C++ compiler installed on your system.
2. Clone the repository to your local machine.
3. Open the file named "main.cpp" in your preferred text editor.
4. Compile the program using your C++ compiler.
5. Run the executable.

## Program Structure

### `ReadNumber` Function:

- Takes a string message as a parameter.
- Prompts the user to enter a positive number.
- Continues prompting until a positive number is entered.
- Returns the entered number.

### `Random` Function:

- Takes two integers, `From` and `To`, as parameters.
- Generates a random number between `From` and `To`.
- Returns the random number.

### `ReadElement` Function:

- Takes an array and its length as parameters.
- Calls `ReadNumber` to read the number of elements in the array.
- Generates random numbers and fills the array.

### `PrintElement` Function:

- Takes an array and its length as parameters.
- Prints the elements of the array.

### `searchNumberinElement` Function:

- Takes an array, a number to search for, and the array length as parameters.
- Calls `ReadNumber` to read the number to search for.
- Searches for the number in the array and prints the result.

### `main` Function:

- Declares an array and its length.
- Calls `ReadElement` to generate random numbers in the array.
- Calls `PrintElement` to print the array.
- Calls `searchNumberinElement` to search for a specific number.


## Example

```cpp
#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int ReadNumber(string Messege)
{
    int Number;

    do
    {
        cout << Messege << endl;
        cin >> Number;
    } while (Number <= 0);
    return Number;
}

int Random(int From,int To)
{
    int RandNB = rand() % (To - From + 1) + From;
    return RandNB;
}

void ReadElement(int array[100],int &arraylength)
{
    arraylength = ReadNumber("\nPlease Enter Number element : ");

    for(int i = 0;i < arraylength;i++)
    {
        array[i] = Random(1,100);
    }
}

void PrintElement(int array[100],int arraylength)
{
    cout << "\nArray element : " << endl;
    for(int i = 0;i < arraylength;i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

void searchNumberinElement(int array[100],int NumberSerch,int arraylength)
{
    NumberSerch = ReadNumber("\nPlease Enter a Number To search for?");

    for(int i = 0;i < arraylength;i++)
    {
        if(array[i] == NumberSerch)
        {
            cout << "\nNumber you are looking for is : " << NumberSerch << endl;
            cout << "The Number found at Position : " << i << endl;
            cout << "The NUmber found its order : " << i+1 << endl;
            return;
        }
    }

     cout << "\nNumber you are looking for is : " << NumberSerch << endl;
     cout << "The Number is not found :-(" << endl;
}

int main()
{
    srand((unsigned)time(NULL));

    int array[100];
    int arraylength;
    int Numberserch;

    ReadElement(array,arraylength);
    PrintElement(array,arraylength);
    searchNumberinElement(array,Numberserch,arraylength);
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
