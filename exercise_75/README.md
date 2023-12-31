# Array Copy Program

This C++ program generates an array of random numbers, copies the array to another array, and prints the elements of both arrays.

## Description

The program contains functions to generate an array of random numbers, copy the array to another array, print the elements of the arrays, and the main function for program execution.

## How to Use

1. Ensure you have a C++ compiler installed on your system.
2. Clone the repository to your local machine.
3. Open the file named "main.cpp" in your preferred text editor.
4. Compile the program using your C++ compiler.
5. Run the executable.

## Program Structure

### `random` Function:

- Takes two integers, `From` and `To`, as parameters.
- Generates a random number between `From` and `To`.
- Returns the random number.

### `ReadElement` Function:

- Takes an integer array and its length as parameters.
- Asks the user to input the number of elements.
- Fills the array with random numbers generated by the `random` function.

### `PrintArray` Function:

- Takes an integer array and its length as parameters.
- Prints the elements of the array.

### `CopyArray` Function:

- Takes two integer arrays and their length as parameters.
- Copies the elements of the first array to the second array.

### `main` Function:

- Declares two integer arrays and their length.
- Calls `ReadElement` to fill the first array with random numbers.
- Calls `CopyArray` to copy the elements of the first array to the second array.
- Prints the elements of both arrays using `PrintArray`.

## Modifying the Program

If you want to customize the program or use it as part of a larger project, you can modify the code in the "main.cpp" file.

## Example

```cpp
#include <iostream>
#include <cstdlib>

using namespace std;

int random(int From,int To)
{
    int RandNB = rand() % (To - From + 1) + From;
    return RandNB;
}

void ReadElement(int array[100],int &arraylength)
{
    cout << "\nPlease Enter a Number of element : " << endl;
    cin >> arraylength;

    for(int i = 0;i < arraylength;i++)
    {
        array[i] = random(1,100);
    }
}

void PrintArray(int array[100],int arraylength)
{
    for(int i = 0;i < arraylength;i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

void CopyArray(int array[100],int arrDestination[100],int arraylength)
{
    for(int i = 0;i < arraylength;i++)
    {
        arrDestination[i] = array[i];
    }
}

int main()
{
    srand((unsigned)time(NULL));

    int array[100],arralength;
    int array2[100];

    CopyArray(array,array2,arralength);
    ReadElement(array,arralength);
    cout << "\nArray 1 element : \n";
    PrintArray(array,arralength);
    cout << "\nArray 2 element After copy : \n";
    PrintArray(array,arralength);

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