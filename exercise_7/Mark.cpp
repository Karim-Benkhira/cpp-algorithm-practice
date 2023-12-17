#include <iostream>
#include <string>

using namespace std;

enum enPassFaill{Pass = 1, Faill = 2};

int ReadMark()
{
    int Mark;
    cout << "Please Enter Your Mark : " << endl;
    cin >> Mark;
    cin.ignore(1,'\n');
    return Mark;
}

enPassFaill CheakMark(int Mark)
{
    if(Mark >= 50)
        return enPassFaill::Pass;
    else
        return enPassFaill::Faill;
}

void PrintResult(int Mark)
{
    if(CheakMark(Mark) == enPassFaill::Pass)
        cout << "You Passed" << endl;
    else
        cout << "You Faild" << endl;
}

int main()
{
    PrintResult(ReadMark());
    return 0;
}