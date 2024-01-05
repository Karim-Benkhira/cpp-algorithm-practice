# Random Number Array and Minimum Element Checker

This C++ program generates an array of random numbers, prints the elements, and finds the minimum element in the array.

## Description

The program contains functions to generate an array of random numbers, check the minimum element, print the array, and the main function for program execution.

## How to Use

1. Ensure you have a C++ compiler installed on your system.
2. Clone the repository to your local machine.
3. Open the file named "main.cpp" in your preferred text editor.
4. Compile the program using your C++ compiler.
5. Run the executable.

## Program Structure

### `ReadRandom` Function:

- Takes two integers, `From` and `To`, as parameters.
- Generates a random number between `From` and `To`.
- Returns the random number.

### `ArrayElement` Function:

- Takes an integer array and its length as parameters.
- Asks the user to input the number of elements.
- Fills the array with random numbers generated by the `ReadRandom` function.

### `PrintArrayElent` Function:

- Takes an integer array and its length as parameters.
- Prints the elements of the array.

### `MinNumberofelement` Function:

- Takes an integer array and its length as parameters.
- Checks and finds the minimum element in the array.
- Returns the minimum element.

### `main` Function:

- Declares an integer array and its length.
- Calls `ArrayElement` to fill the array with random numbers.
- Prints the array using `PrintArrayElent`.
- Calls `MinNumberofelement` to find and print the minimum element.

## Example

```cpp
#include <iostream>
#include <cstdlib>

using namespace std;

int ReadRandom(int From,int To)
{
    int Random = rand() % (To - From + 1) + From;
    return Random;
}

void ArrayElement(int array[100],int &arrayLength)
{
    cout << "\nPlesae Enter a Number of Element : " << endl;
    cin >> arrayLength;

    for(int i = 0;i < arrayLength;i++)
    {
        array[i] = ReadRandom(1,100);
    }
}

void PrintArrayElent(int array[100],int arrayLength)
{
    for(int i = 0;i < arrayLength;i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

int MinNumberofelement(int array[100],int arrayLength)
{
    int Min = 0;

    for(int i = 0;i < arrayLength;i++)
    {
        if(array[i] < array[i+1])
        {
            Min = array[i];
            array[i] = array[i + 1];
            array[i+1] = Min;
        }
    }
    return Min;
}

int main()
{
    srand((unsigned)time(NULL));
    int array[100],arralength;

    ArrayElement(array,arralength);
    cout << "\nArray Element : \n";
    PrintArrayElent(array,arralength);

    cout << "\nMin Number is : ";
    cout << MinNumberofelement(array,arralength) << endl;

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