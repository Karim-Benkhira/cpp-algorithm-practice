#include <iostream>
#include <string>

using namespace std;

struct stinfo
{
    string FirstName;
    string LastName;
};

stinfo ReadInfo()
{
    stinfo info;
    cout << "Please Enter Your first Name : " << endl;
    cin >> info.FirstName;
    cout << "Please Enter Your LastName : " << endl;
    cin >> info.LastName;
    return info;
}

string GetFullName (stinfo info)
{
    string FullName;
    FullName = "";

    FullName = info.FirstName + " " + info.LastName;
    return FullName;
}

void PrintFullName(string info)
{
    cout << "Your FullName is : " << info << endl;
}

int main()
{
    PrintFullName(GetFullName(ReadInfo()));
    return (0);
}