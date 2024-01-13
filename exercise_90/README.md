# Even Numbers Count Program

This C++ program generates an array of random numbers and counts the total even numbers in the array. It includes functions for reading user input, generating random numbers, reading array elements, printing array elements, and counting even numbers.

## Description

The program initializes an array with random values, reads the length of the array from the user, and then counts the total even numbers in the array. It includes functions to perform specific tasks, such as reading user input, generating random numbers, reading array elements, printing array elements, and counting even numbers.

## How to Use

1. Ensure you have a C++ compiler installed on your system.
2. Clone the repository to your local machine.
3. Open the file named "main.cpp" in your preferred text editor.
4. Compile the program using your C++ compiler.
5. Run the executable.

## Program Structure

### `ReadNumber` Function:

- Takes a message as a parameter and prompts the user to enter a positive number.
- Ensures the entered number is positive before returning it.

### `Random` Function:

- Takes a range (From and To) as parameters and generates a random number within that range.
- Returns the generated random number.

### `ReadElement` Function:

- Takes an array and its length as parameters.
- Reads the length of the array from the user.
- Fills the array with random numbers.

### `PrintElement` Function:

- Takes an array and its length as parameters.
- Prints the elements of the array.

### `IsEVENNumber` Function:

- Takes an array and its length as parameters.
- Counts the total even numbers in the array.
- Returns the count.

### `main` Function:

- Declares an array (`array`) and its length.
- Calls `ReadElement` to read user input and print the array.
- Calls `IsEVENNumber` to count the even numbers and prints the result.


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
    int RadNB = rand() % (To - From + 1) + From;
    return RadNB;
}

void ReadElement(int array[100],int &arraylength)
{
    arraylength = ReadNumber("Please Enter element : ");

    for(int i = 0;i < arraylength;i++)
    {
        array[i] = Random(1,100);
    }
    cout << endl;
}

void PrintElement(int array[100],int arraylength)
{
    cout << "Array element : " << endl;

    for(int i = 0;i < arraylength;i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

int IsEVENNumber(int array[100],int length)
{
    int count = 0;

    for(int i = 0;i < length;i++)
    {
        if(array[i] % 2 == 0)
            count++;
    }
    return count;
}

int main()
{
    srand((unsigned)time(NULL));

    int array[100];
    int length = 0;

    ReadElement(array,length);
    PrintElement(array,length);
    cout << "\nEven Numbers Count is : " << endl;
    cout << IsEVENNumber(array,length);
    cout << endl;

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
