#include <iostream>
#include <string>
using namespace std;

string invertBits(const string& s, int i)
{
    if (i == s.size())
        return "";

    char flipped = (s[i] == '0') ? '1' : '0';
    return flipped + invertBits(s, i + 1);
}

int main()
{
    string bin;
    cin >> bin;

    cout << invertBits(bin, 0) << endl;
    return 0;
}