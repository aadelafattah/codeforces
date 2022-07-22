#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string word;
        cin >> word;
        if (word.size() > 10)
        {
            int size = word.size() - 2;
            cout << word[0] << size << word[size + 1] << endl;
        }
        else
        {
            cout << word << endl;
        }
    }
    return 0;
}
