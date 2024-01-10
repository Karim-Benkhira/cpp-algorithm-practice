# Dynamic Array Input

This C++ program allows the user to dynamically input numbers into an array. The program prompts the user to enter positive numbers and adds them to the array dynamically until the user decides to stop. It then prints the array elements and the array length.

## Description

The program includes functions to read a positive number from the user, add elements to an array, input user numbers into the array dynamically, print the elements of an array, and display the array length.

## How to Use

1. Ensure you have a C++ compiler installed on your system.
2. Clone the repository to your local machine.
3. Open the file named "main.cpp" in your preferred text editor.
4. Compile the program using your C++ compiler.
5. Run the executable.

## Program Structure

### `ReadNumber` Function:

- Prompts the user to enter a positive number.
- Continues prompting until a positive number is entered.
- Returns the entered number.

### `AddElementInArray` Function:

- Takes a number, an array, and its length as parameters.
- Adds the number to the array at the end.
- Increments the array length.

### `InputUserNumbersInarray` Function:

- Takes an array and its length as parameters.
- Uses a loop to repeatedly call `ReadNumber` and `AddElementInArray` to input user numbers into the array.
- Asks the user if they want to add more numbers after each input.

### `PrintArray` Function:

- Takes an array and its length as parameters.
- Prints the elements of the array.

### `main` Function:

- Declares an array and its length.
- Calls `InputUserNumbersInarray` to dynamically input user numbers into the array.
- Calls `PrintArray` to print the array elements.
- Displays the array length.


## Example

```cpp
#include <iostream>
#include <cstdlib>

using namespace std;

int ReadNumber()
{
    int Number;

    do
    {
        cout << "\nPlease enter a number? " << endl;
        cin >> Number;
    } while (Number <= 0);

    return Number;
}

void AddElementInArray(int Number,int array[100],int &arralength)
{
    arralength++;
    array[arralength-1] = Number;
}

void InputUserNumbersInarray(int array[100],int &arralength)
{
    bool AddMore = true;

    do
    {
        AddElementInArray(ReadNumber(),array,arralength);
        cout << "\nDo You want to add more Numbers ? [0]:No,[1]:Yes " << endl;
        cin >> AddMore;
    } while (AddMore);
    
}

void PrintArray(int array[100],int arralength)
{
    cout << "\nArray element : " << endl;

    for(int i = 0;i < arralength;i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

int main()
{
    int array[100];
    int arralength;

    InputUserNumbersInarray(array,arralength);

    cout << "\nArray Length: " << arralength << endl;
    PrintArray(array,arralength);

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