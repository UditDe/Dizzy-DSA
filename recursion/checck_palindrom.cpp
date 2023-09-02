#include <bits/stdc++.h>
using namespace std;

bool check_P(string str, int i = 0)
{
    int j = str.length() - i - 1;
    if (i >= j)
    {
        if (str[i] == str[j])
        {

            return true;
        }
        else
        {
            return false;
        }
    }
    if (str[i] != str[j])
    {
        return false;
    }
    return (true && check_P(str, i + 1));
}

int main()
{
    string str;
    cin >> str;
    if (check_P(str))
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
    return 0;
}