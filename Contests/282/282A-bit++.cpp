#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int x = 0;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string input;
        cin >> input;
        if (input.find("++") != string::npos)
        {
            x += 1;
        }
        else if (input.find("--") != string::npos)
        {
            x -= 1;
        }
    }
    cout << x;
    return 0;
}
