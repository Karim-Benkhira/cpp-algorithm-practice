# Array Element Frequency Counter

This C++ program allows the user to input an array and a specific number. The program then calculates and displays the frequency of the specified number in the array.

## Description

The program consists of several functions that facilitate array input, array printing, and counting the frequency of a given number in the array.

## How to Use

1. Ensure you have a C++ compiler installed on your system.
2. Clone the repository to your local machine.
3. Open the file named "main.cpp" in your preferred text editor.
4. Compile the program using your C++ compiler.
5. Run the executable.

## Program Structure

### `ReadNumber` Function:

- Takes a string parameter, `Message`, for user input.
- Ensures the user enters a positive number greater than zero.
- Returns the entered number.

### `ReadArray` Function:

- Takes an integer array and its length as parameters.
- Asks the user to input the number of elements and then the array elements.
- Modifies the array and its length with the user's input.

### `PrintArray` Function:

- Takes an integer array and its length as parameters.
- Prints the elements of the array.

### `TimesRepeated` Function:

- Takes a number to check, an integer array, and its length as parameters.
- Counts the frequency of the specified number in the array.
- Returns the count.

### `main` Function:

- Declares an integer array, its length, and a number to check.
- Calls `ReadArray` to input the array.
- Calls `ReadNumber` to input the number to check.
- Prints the original array using `PrintArray`.
- Calls `TimesRepeated` to calculate and print the frequency of the specified number.

## Modifying the Program

If you want to customize the program or use it as part of a larger project, you can modify the code in the "main.cpp" file.

## Example

```cpp
#include <iostream>
#include <string>

using namespace std;

int ReadNumber(string Messege)
{
    int Number;

    do
    {
        cout << Messege << endl;
        cin >> Number ;
    } while (Number <= 0);

    return Number;
}

void ReadArray(int array[100],int &arrLength)
{
    cout << "Please Enter Number of element : " << endl;
    cin >> arrLength;

    cout << "Enter array element : " << endl;

    for(int i = 0; i < arrLength; i++)
    {
        cout << "Element [" << i + 1 << "] : ";
        cin >> array[i];
    }
    cout << endl;
}

void PrintArray(int array[100],int arralength)
{
    for(int i = 0;i < arralength; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

int TimesRepeated(int Number,int array[100],int arralength)
{
    int counter = 0;
    for(int i = 0;i < arralength; i++)
    {
        if(Number == array[i])
            counter++;
    }
    return counter;
}

int main()
{
    int array[100],arralength,NumberTocheck;

    ReadArray(array,arralength);

    NumberTocheck = ReadNumber("PLease Enter the Number you want to check : ");

    cout << "\nOriginal array : ";
    PrintArray(array,arralength);

    cout << "Number " << NumberTocheck;
    cout << " is repeated : ";
    cout << TimesRepeated(NumberTocheck,array,arralength);
    cout << " Time(s)" << endl;
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