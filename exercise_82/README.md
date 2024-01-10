# Array Number Search

This C++ program allows the user to generate an array of random numbers and check if a specific number is present in the array. It prompts the user to enter the number of elements in the array, generates random numbers within a specified range, prints the generated array, and then prompts the user to enter a number to search for within the array.

## Description

The program includes functions to read a positive number from the user, generate a random number within a specified range, read elements into an array, print the elements of an array, find the position of a specific number in the array, check if a number is present in the array, and print the result.

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

### `FindNumberPositionInarray` Function:

- Takes a number, an array, and its length as parameters.
- Searches for the position of the number in the array.
- Returns the position if found, otherwise returns -1.

### `isNumberInArray` Function:

- Takes a number, an array, and its length as parameters.
- Calls `FindNumberPositionInarray` to check if the number is present in the array.
- Returns true if the number is found, otherwise returns false.

### `main` Function:

- Declares an array and its length.
- Calls `ReadElement` to generate random numbers in the array.
- Calls `PrintElement` to print the array.
- Prompts the user to enter a number to search for.
- Calls `isNumberInArray` to check if the number is present and prints the result.


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

short FindNumberPositionInarray(int Number,int array[100],int arraylength)
{
    for(int i = 0;i < arraylength;i++)
    {
        if(array[i] == Number)
            return i;
    }
    return -1;
}

bool isNumberInArray(int Number,int array[100],int arraylength)
{
    return FindNumberPositionInarray(Number,array,arraylength) != -1;
}

int main()
{
    int array[100];
    int arraylength;
    int Number;

    ReadElement(array,arraylength);
    PrintElement(array,arraylength);

    Number = ReadNumber("\nPlease enter a number to search for?\n");
    cout << "\nNumber you are looking for is: " << Number << endl;
    if(!isNumberInArray(Number,array,arraylength))
        cout << "No, The number is not found :-(\n"; 
    else
    {
        cout << "Yes it is found :-)\n"; 
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