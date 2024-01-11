# Copy Prime Numbers Program

This C++ program generates an array of random numbers and copies the prime numbers into another array. It includes functions for checking prime numbers, reading user input, generating random numbers, reading elements into an array, printing array elements, adding elements to an array, and copying prime numbers to another array.

## Description

The program initializes an array with random numbers and then copies the prime numbers into another array. It includes functions to perform specific tasks, such as checking whether a number is prime, reading a positive number from the user, generating random numbers, reading elements into an array, printing array elements, adding elements to an array, and copying prime numbers from one array to another.

## How to Use

1. Ensure you have a C++ compiler installed on your system.
2. Clone the repository to your local machine.
3. Open the file named "main.cpp" in your preferred text editor.
4. Compile the program using your C++ compiler.
5. Run the executable.

## Program Structure

### `CheckPrime` Function:

- Takes a number as a parameter.
- Checks whether the number is prime.
- Returns `enPrime::Prime` if the number is prime, otherwise `enPrime::NotPrime`.

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

### `PrintElement` Function:

- Takes an array and its length as parameters.
- Prints the elements of the array.

### `AddElementInArray` Function:

- Takes a number, an array, and its length as parameters.
- Adds the number to the array at the end.
- Increments the array length.

### `CopyPrimeNumbers` Function:

- Takes the source array, destination array, source array length, and destination array length as parameters.
- Copies prime numbers from the source array to the destination array using `CheckPrime` and `AddElementInArray`.

### `main` Function:

- Declares two arrays (`Array1` and `Array2`) and their lengths.
- Calls `ReadElement` to fill the first array and prints it.
- Calls `CopyPrimeNumbers` to copy the prime numbers from the first array to the second array and prints the second array.


## Example

```cpp
#include <iostream>
#include <cstdlib>
#include <string>
#include <cmath>

using namespace std;
enum enPrime{Prime = 1,NotPrime = 2};

enPrime CheackPrime(int Number)
{
    int M = Number / 2;

    for(int i = 2;i <= M;i++)
    {
        if(Number % i == 0 )
            return enPrime::NotPrime;
    }
    return enPrime::Prime;
}
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

void ReadElement(int Array[100],int &ArrayLength)
{
    ArrayLength = ReadNumber("Please Enter Number element : ");

    for(int i = 0;i < ArrayLength;i++)
    {
        Array[i] = Random(1,100);
    }
    cout << endl;
}

void PrintElement(int Array[100],int ArrayLength)
{
    for(int i = 0;i <ArrayLength;i++)
    {
        cout << Array[i] << " ";
    }
    cout << endl;
}

void AddElementInArray(int Number,int Array[100],int &arralength)
{
    arralength++;
    Array[arralength-1] = Number;
}

void CopyPrimeNumbers(int ArraySource[100],int ArrayDestination[100],int ArrayLength,int &arrayDestinationLength)
{
    for(int i = 0;i < ArrayLength;i++)
    {
        if(CheackPrime(ArraySource[i]) == enPrime::Prime)
            AddElementInArray(ArraySource[i],ArrayDestination,arrayDestinationLength);
    }
}

int main()
{
    srand((unsigned)time(NULL));

    int Array1[100];
    int Array2[100];
    int array1length = 0;
    int array2length = 0;

    ReadElement(Array1,array1length);
    cout << "\nArray 1 element : " << endl;
    PrintElement(Array1,array1length);
    CopyPrimeNumbers(Array1,Array2,array1length,array2length);
    cout << "\nArray 2 Prime Numbers : " << endl;
    PrintElement(Array2,array2length);

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