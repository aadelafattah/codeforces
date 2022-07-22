#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, k;
    cin >> n >> k;
    int advanced = 0;
    int parts[n];
    for (int i = 0; i < n; i++)
    {
        cin >> parts[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (parts[i] >= parts[k - 1] && parts[i] != 0)
        {
            advanced++;
        }
    }
    cout << advanced;
    return 0;
}
