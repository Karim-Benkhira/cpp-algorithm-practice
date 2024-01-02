#include <iostream>
#include <string>

using namespace std;

string ReadText(string Messege)
{
    string Name;
    cout << Messege << endl;
    getline(cin,Name);
    return Name;
}

string EncyptText(string Name,short Key)
{
    for(int i = 0;i<= Name.length();i++)
    {
        Name[i] = (char)((int) Name[i] + Key);
    }
    return Name;
}

string DecryptText(string Text,short Key)
{
    for(int i = 0;i <= Text.length();i++)
    {
        Text[i] = (char)((int) Text[i] - Key);
    }
    return(Text);
}

int main()
{
    const short Key = 2;
    string Read = ReadText("PLease Enter text : ");
    string Encypt = EncyptText(Read,Key);
    string Decrypt = DecryptText(Encypt,Key);

    cout << "Text Befor enCryption : " << Read << endl;
    cout << "Text After Encryption : " << Encypt << endl;
    cout << "Text After Decryption : " << Decrypt << endl;

    return 0;
}