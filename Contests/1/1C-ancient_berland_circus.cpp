#include <iostream>
#include <cmath>
#include <iomanip>
#include <algorithm>
#define PI 3.1415926535
#define eps 1e-4

// Blog help    : https://codeforces.com/blog/entry/495?#comment-203231
// And          : https://arabicprogrammer.com/article/89792282023/
using namespace std;

double gcd(double x, double y)
{
    if (fabs(x) < eps)
        return y;
    if (fabs(y) < eps)
        return x;
    return gcd(y, fmod(x, y));
}
int main(int argc, char const *argv[])
{
    double ax, bx, cx, ay, by, cy;
    double a, b, c;
    cin >> ax >> ay >> bx >> by >> cx >> cy;
    a = sqrt((ax - bx) * (ax - bx) + (ay - by) * (ay - by));
    b = sqrt((ax - cx) * (ax - cx) + (ay - cy) * (ay - cy));
    c = sqrt((bx - cx) * (bx - cx) + (by - cy) * (by - cy));
    // using Heron's formula
    double s = (a + b + c) / 2;
    double area = sqrt(s * (s - a) * (s - b) * (s - c));
    double r = a * b * c / (4 * area);
    double A = acos(1 - (a * a / (2 * r * r)));
    double B = acos(1 - (b * b / (2 * r * r)));
    double C = 2 * PI - A - B;
    double angle = gcd(A, gcd(B, C));
    double smallest = 0.5 * r * r * sin(angle) * (2 * PI / angle);
    cout << fixed;
    cout << setprecision(6);
    cout << smallest;
    return 0;
}