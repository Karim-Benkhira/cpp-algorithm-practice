# Palindrome Check Program

This C++ program checks whether an array is a palindrome. It includes functions for filling an array, printing array elements, checking for palindrome, and printing the result.

## Description

The program initializes an array with values and then checks whether it is a palindrome. It includes functions to perform specific tasks, such as filling an array with predefined values, printing array elements, checking for palindrome, and printing the result.

## How to Use

1. Ensure you have a C++ compiler installed on your system.
2. Clone the repository to your local machine.
3. Open the file named "main.cpp" in your preferred text editor.
4. Compile the program using your C++ compiler.
5. Run the executable.

## Program Structure

### `fillArray` Function:

- Initializes an array with predefined values.
- Sets the array length to a specific value (in this case, 6).

### `PrintArrayelement` Function:

- Takes an array and its length as parameters.
- Prints the elements of the array.

### `isPalindrome` Function:

- Takes an array and its length as parameters.
- Checks if the array is a palindrome.
- Returns true if it is a palindrome, otherwise false.

### `PrintResult` Function:

- Takes an array and its length as parameters.
- Calls the `isPalindrome` function and prints the result.

### `main` Function:

- Declares an array (`array`) and its length.
- Calls `fillArray` to fill the array and prints it.
- Calls `PrintResult` to check if the array is a palindrome and prints the result.


## Example

```cpp
#include <iostream>

using namespace std;

void fillArray(int array[100],int &arraylength)
{
    arraylength = 6;
    array[0] = 10;
    array[1] = 20;
    array[2] = 30;
    array[3] = 30;
    array[4] = 20;
    array[5] = 10;
}

void PrintArrayelement(int array[100],int arralength)
{
    for(int i = 0;i < arralength;i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

bool isPalindrome(int array[100],int length)
{
    for(int i = 0;i < length;i++)
    {
        if(array[i] != array[length - i - 1])
            return false;
    }
    return true;
}

void PrintResult(int array[100],int length)
{
    if(isPalindrome(array,length) == true)
        cout << "\nYes array is Palindrome " << endl;
    else
        cout << "No array is not Palindrome" << endl; 
}

int main()
{
    int array[100];
    int arraylength = 0;

    fillArray(array,arraylength);
    cout << "Array element : " << endl;
    PrintArrayelement(array,arraylength);
    PrintResult(array,arraylength);

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
