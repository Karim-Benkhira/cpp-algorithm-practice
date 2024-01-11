# Copy Odd Numbers Program

This C++ program generates an array of random numbers, and then copies the odd numbers into another array. It includes functions for reading user input, generating random numbers, reading elements into an array, printing array elements, adding elements to an array, and copying odd numbers to another array.

## Description

The program initializes an array with random numbers and then copies the odd numbers into another array. It includes functions to perform specific tasks, such as reading a positive number from the user, generating random numbers, reading elements into an array, printing array elements, adding elements to an array, and copying odd numbers from one array to another.

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

### `Random` Function:

- Takes a range (`From` and `To`) and generates a random number within that range.
- Returns the generated random number.

### `ReadElement` Function:

- Takes an array and its length as parameters.
- Uses `ReadNumber` and `Random` to read random elements into the array.

### `PrintArray` Function:

- Takes an array and its length as parameters.
- Prints the elements of the array.

### `AddElementInArray` Function:

- Takes a number, an array, and its length as parameters.
- Adds the number to the array at the end.
- Increments the array length.

### `CopyOddNumbers` Function:

- Takes the source array, destination array, source array length, and destination array length as parameters.
- Copies odd numbers from the source array to the destination array using `AddElementInArray`.

### `main` Function:

- Declares two arrays (`array` and `array2`) and their lengths.
- Calls `ReadElement` to fill the first array and prints it.
- Calls `CopyOddNumbers` to copy the odd numbers from the first array to the second array and prints the second array.


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

void ReadElement(int array[100],int &arralength)
{
    arralength = ReadNumber("\nPlease enter Number element : ");

    for(int i = 0;i < arralength;i++)
    {
        array[i] = Random(1,100);
    }
    cout << endl;
}

void PrintArray(int array[100],int arralength)
{
    for(int i = 0;i < arralength;i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

void AddElementInArray(int Number,int array[100],int &arralength)
{
    arralength++;
    array[arralength-1] = Number;
}

void CopyOddNumbers(int Arraysource[100],int arrayDestination[100],int arralength,int &arrayDestinationLength)
{
    for(int i = 0; i <arralength;i++)
    {
        if(Arraysource[i] % 2 != 0)
            AddElementInArray(Arraysource[i],arrayDestination,arrayDestinationLength);
    }
}

int main()
{
    srand((unsigned)time(NULL));

    int array[100];
    int array2[100];
    int arralength = 0;
    int array2length = 0;

    ReadElement(array,arralength);
    cout << "Array 1 Element : " << endl;
    PrintArray(array,arralength);

    CopyOddNumbers(array,array2,arralength,array2length);
    cout << "\nArray 2 odd Numbers : " << endl;
    PrintArray(array2,array2length);

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