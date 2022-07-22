#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    string string1, string2;
    cin >> string1 >> string2;
    for (int i = 0; i < string1.size(); i++)
    {
        string1[i] = tolower(string1[i]);
        string2[i] = tolower(string2[i]);
    }
    int res = string1.compare(string2);
    if (res < 0)
    {
        cout << -1;
    }
    else if (res > 0)
    {
        cout << 1;
    }
    else
    {
        cout << 0;
    }
    return 0;
}
