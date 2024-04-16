#include <bits/stdc++.h>

using namespace std;

int main()
{
    for (int j = 0; j < 2; j++)
    {
        string temp;
        int a, b, c;
        getline(cin, temp);
        getline(cin, temp);
        for (int i = 0; i < 2; i++)
        {
            cin >> a >> b >> c;
        }
        cin.ignore();
        cout << a << " " << b << " " << c;
    }
}