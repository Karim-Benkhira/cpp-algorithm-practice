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