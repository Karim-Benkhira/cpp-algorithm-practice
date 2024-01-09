# Array Reversal

This C++ program generates an array with random numbers, prints the original array, reverses the elements of the array, and prints the reversed array.

## Description

The program contains functions to read a number from the user, generate an array with random numbers, print the array, reverse the elements of the array, and print the reversed array. The main function orchestrates the program's execution.

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

- Takes an integer array and its length as parameters.
- Calls `ReadNumber` to get the number of elements.
- Fills the array with random numbers using the `Random` function.

### `PrintElement` Function:

- Takes an integer array and its length as parameters.
- Prints the elements of the array.

### `ReverseElement` Function:

- Takes two integer arrays and their length as parameters.
- Reverses the elements of the first array and stores them in the second array.

### `main` Function:

- Declares two integer arrays and their lengths.
- Calls `ReadElement` to fill the first array with random numbers.
- Calls `PrintElement` to print the original array.
- Calls `ReverseElement` to reverse the elements and store them in the second array.
- Calls `PrintElement` to print the reversed array.


## Example

```cpp
#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int ReadNumber(string Messge)
{
    int Number;

    do
    {
        cout << Messge << endl,
        cin >> Number;
    } while (Number <= 0);
    return Number;
}

int Random(int From ,int To)
{
    int RandNB = rand() % (To - From + 1) + From;
    return RandNB;
}

void ReadElement(int Array[100],int &arraylength)
{
    arraylength = ReadNumber("Please Enter Number element : ");

    for(int i = 0;i <arraylength;i++)
    {
        Array[i] =Random(1,100);
    }
}

void PrintElement(int Array[100],int arraylength)
{
    for(int i = 0;i < arraylength;i++)
    {
        cout << Array[i] << " ";
    }
    cout << endl;
}

void ReverseElement(int array[100],int arrayrev[100],int arraylength)
{
    for(int i = 0;i < arraylength;i++)
    {
        arrayrev[i] = array[arraylength - 1 - i];
    }
}

int main()
{
    int array[100],arraylength;
    int arrayrev[100];

    ReadElement(array,arraylength);
    cout << "Array element : " << endl;
    PrintElement(array,arraylength);
    
    ReverseElement(array,arrayrev,arraylength);
    cout << "\nArray 2 elements after copying array1 in reversed order:\n";
    PrintElement(arrayrev,arraylength);
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