#include <iostream>
#include <regex>
#include <sstream>
#include <cmath>
using namespace std;
unsigned long MAX = pow(10.0, 6.0);
string one_to_two(string row_column)
{
    stringstream ss;
    unsigned long index_of_c = row_column.find("C");
    unsigned long column;
    string row = row_column.substr(1, index_of_c - 1);
    ss << row_column.substr(index_of_c + 1, row_column.size() - index_of_c - 1);
    ss >> column;
    char str[MAX];
    unsigned long i = 0;
    while (column > 0)
    {
        unsigned long rem = column % 26;
        if (rem == 0)
        {
            str[i++] = 'Z';
            column = (column / 26) - 1;
        }
        else
        {
            str[i++] = (rem - 1) + 'A';
            column = column / 26;
        }
    }
    str[i] = '\0';
    reverse(str, str + strlen(str));
    string result = str + row;
    return result;
}
string two_to_one(string cell)
{
    unsigned long index = 0;
    for (unsigned long i = 0; i < cell.size(); i++)
    {
        if (isdigit(cell[i]))
        {
            index = i;
            break;
        }
    }
    string row = cell.substr(index, cell.size() - index);
    string column = cell.substr(0, index);
    unsigned long sum = 0;
    for (unsigned long i = 0; i < column.size(); i++)
    {
        sum = 26 * sum + ((column[i] - 'A') + 1);
    }
    string result = "R" + row + "C" + to_string(sum);
    return result;
}
int main(int argc, char const *argv[])
{
    unsigned long n;
    cin >> n;
    string input;
    regex style_one("R[0-9]+C[0-9]+");
    for (unsigned long i = 0; i < n; i++)
    {
        cin >> input;
        if (regex_match(input, style_one))
        {
            cout << one_to_two(input) << endl;
        }
        else
        {
            cout << two_to_one(input) << endl;
        }
    }
    return 0;
}
