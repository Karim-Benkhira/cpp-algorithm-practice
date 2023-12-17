#include <iostream>
#include <string>

using namespace std;

struct stInfo
{
    int Age;
    bool HasDrivingLicense;
};

stInfo ReadInfo()
{
    stInfo info;

    cout << "Please Enter Your Age : " << endl;
    cin >> info.Age;
    cout << "Do You have driver License ? " << endl;
    cin >> info.HasDrivingLicense;
    return info;
}

bool isAccepted(stInfo info)
{
    return (info.Age > 20 && info.HasDrivingLicense == true);
}

void PrintResult(stInfo info)
{
    if(isAccepted(info))
        cout << "Hired " << endl;
    else
        cout << "Rejected " << endl;
}

int main()
{
    PrintResult(ReadInfo());
    return (0);
}