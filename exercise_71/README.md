# Random Number Array and Maximum Element Checker

This C++ program generates an array of random numbers, prints the elements, and finds the maximum element in the array.

## Description

The program contains functions to generate an array of random numbers, check the maximum element, print the array, and the main function for program execution.

## How to Use

1. Ensure you have a C++ compiler installed on your system.
2. Clone the repository to your local machine.
3. Open the file named "main.cpp" in your preferred text editor.
4. Compile the program using your C++ compiler.
5. Run the executable.

## Program Structure

### `RanDom` Function:

- Takes two integers, `From` and `To`, as parameters.
- Generates a random number between `From` and `To`.
- Returns the random number.

### `ReadRandomNumberarray` Function:

- Takes an integer array and its length as parameters.
- Asks the user to input the number of elements.
- Fills the array with random numbers generated by the `RanDom` function.

### `CheakMaxNumber` Function:

- Takes an integer array and its length as parameters.
- Checks and finds the maximum element in the array.
- Returns the maximum element.

### `Printarray` Function:

- Takes an integer array and its length as parameters.
- Prints the elements of the array.

### `main` Function:

- Declares an integer array and its length.
- Calls `ReadRandomNumberarray` to fill the array with random numbers.
- Prints the array using `Printarray`.
- Calls `CheakMaxNumber` to find and print the maximum element.


## Example

```cpp
#include <iostream>
#include <cstdlib>

using namespace std;

int RanDom(int From,int To)
{
    int RandNB = rand() % (To - From + 1) + From;
    return RandNB;
}

void ReadRandomNumberarray(int array[100],int &arraylength)
{
    cout << "Please Enter Number of Element : " << endl;
    cin >> arraylength;

    for(int i = 0;i < arraylength;i++)
    {
        array[i] = RanDom(1,100);
    }
}

int CheakMaxNumber(int array[100],int arralength)
{
    int swp = 0;
    for(int i = 0;i < arralength;i++)
    {
        if(array[i] > array[i+1])
        {
            swp = array[i];
            array[i] = array[i+1];
            array[i+1] = swp;
        }
    }
    return swp;
}

void Printarray(int array[100],int arrLength)
{
    for(int i = 0;i < arrLength;i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

int main()
{
    srand((unsigned)time(NULL));

    int array[100],arraylength;

    ReadRandomNumberarray(array,arraylength);
    cout << "\nArray Element : " << endl;
    Printarray(array,arraylength);

    cout << "\nMax Element is : "<< CheakMaxNumber(array,arraylength) << endl;
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