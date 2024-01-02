# Random Number Generator

This C++ program generates random numbers within a specified range using the `rand()` function.

## Description

The program includes a function `RandomNumber` that takes two integer parameters representing the range (`From` and `to`) and generates a random number within that range using the `rand()` function.

## How to Use

1. Ensure you have a C++ compiler installed on your system.
2. Clone the repository to your local machine.
3. Open the file named "main.cpp" in your preferred text editor.
4. Compile the program using your C++ compiler.
5. Run the executable.

## Program Structure

### `RandomNumber` Function:

- Takes two integer parameters, `From` and `to`, representing the range.
- Generates a random number within the specified range using the `rand()` function.
- Returns the generated random number.

### `main` Function:

- Seeds the random number generator using `srand((unsigned)time(NULL))`.
- Calls the `RandomNumber` function to generate and print random numbers.


## Example

```cpp
#include <iostream>
#include <cstdlib>

using namespace std;

int RandomNumber(int From,int to)
{
    int RandNB = rand() %  (to - From + 1) + From;
    return RandNB;
}

int main()
{
    srand((unsigned)time(NULL));

    cout << RandomNumber(10,20) << endl;
    cout << RandomNumber(10,20) << endl;
    cout << RandomNumber(1,10) << endl;
    cout << RandomNumber(1,10) << endl;


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