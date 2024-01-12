# Copy Distinct Elements Program

This C++ program fills an array with values and then copies distinct elements to another array. It includes functions for filling an array, printing array elements, finding a number in an array, checking if a number is in an array, adding a number to an array, and copying distinct elements to another array.

## Description

The program initializes an array with values and then copies only the distinct elements to another array. It includes functions to perform specific tasks, such as filling an array with predefined values, printing array elements, finding a number in an array, checking if a number is in an array, adding a number to an array, and copying distinct elements from one array to another.

## How to Use

1. Ensure you have a C++ compiler installed on your system.
2. Clone the repository to your local machine.
3. Open the file named "main.cpp" in your preferred text editor.
4. Compile the program using your C++ compiler.
5. Run the executable.

## Program Structure

### `fillArray` Function:

- Initializes an array with predefined values.
- Sets the array length to a specific value (in this case, 10).

### `PrintArrayelement` Function:

- Takes an array and its length as parameters.
- Prints the elements of the array.

### `FindNUmberInArray` Function:

- Takes a number, an array, and its length as parameters.
- Searches for the number in the array.
- Returns the index of the number if found, otherwise -1.

### `isNUmberInArray` Function:

- Takes a number, an array, and its length as parameters.
- Returns true if the number is found in the array, otherwise false.

### `AddNumberInArray` Function:

- Takes a number, an array, and its length as parameters.
- Adds the number to the array at the end.
- Increments the array length.

### `CopyDistinctElementInArray` Function:

- Takes the source array, destination array, source array length, and destination array length as parameters.
- Copies distinct elements from the source array to the destination array using `isNUmberInArray` and `AddNumberInArray`.

### `main` Function:

- Declares two arrays (`array1` and `array2`) and their lengths.
- Calls `fillArray` to fill the first array and prints it.
- Calls `CopyDistinctElementInArray` to copy distinct elements from the first array to the second array and prints the second array.


## Example

```cpp
#include <iostream>

using namespace std;

void fillArray(int array[100],int &arralength)
{
    arralength = 10;
    array[0] = 10;
    array[1] = 10;
    array[2] = 10;
    array[3] = 50;
    array[4] = 50;
    array[5] = 70;
    array[6] = 70;
    array[7] = 70;
    array[8] = 70;
    array[9] = 90;
}

void PrintArrayelement(int array[100],int arralength)
{

    for(int i = 0;i < arralength;i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

int FindNUmberInArray(int Number,int array[100],int length)
{
    for(int i = 0;i < length;i++)
    {
        if(array[i] == Number)
            return i;
    }
    return -1;
}

bool isNUmberInArray(int Number,int array[100],int length)
{
    return FindNUmberInArray(Number,array,length) != -1;
}

void AddNumberInArray(int Number,int array[100],int &arraylength)
{
    arraylength++;
    array[arraylength-1] = Number;
}

void CopyDistinctElementInArray(int arraySource[100],int arrayDEstination[100],int arraylength,int &arrayDEstinationLngth)
{
    for(int i = 0;i < arraylength;i++)
    {
        if(!isNUmberInArray(arraySource[i],arrayDEstination,arrayDEstinationLngth))
            AddNumberInArray(arraySource[i],arrayDEstination,arrayDEstinationLngth);
    }
}

int main()
{
    int array1[100];
    int array2[100];
    int arra1length = 0;
    int arra2length = 0;

    fillArray(array1,arra1length);
    cout << "\nArray 1 element : " << endl;
    PrintArrayelement(array1,arra1length);
    CopyDistinctElementInArray(array1,array2,arra1length,arra2length);
    cout << "\nArray 2 distinct elements:\n";
    PrintArrayelement(array2,arra2length);

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