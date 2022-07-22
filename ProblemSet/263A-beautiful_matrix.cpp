#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int middle = 2;
    int n = 5;
    int input = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> input;
            if (input == 1)
            {
                cout << abs(middle - i) + abs(middle - j);
                return 0;
            }
        }
    }
    return 0;
}
