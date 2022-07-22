#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[])
{
    long double n, m, a;
    cin >> n >> m >> a;
    unsigned long long int x = ceil(n / a);
    unsigned long long int y = ceil(m / a);
    cout << x * y;
    return 0;
}
