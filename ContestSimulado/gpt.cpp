#include <bits/stdc++.h>

using namespace std;

void solve()
{
    string temp;
    getline(cin, temp);
    vector<int> nums;
    string temp2 = "";
    for (char digito : temp)
    {
        if (digito >= '0' && digito <= '9')
            temp2 += digito;
        else if (digito == ' ')
        {
            nums.push_back(stoi(temp2));
            temp2 = "";
        }
    }
    nums.push_back(stoi(temp2));

    bool valido = true;
    for (int i = 0; i <= nums.size() / 2 - 1; i++)
    {

        if (nums[i] > nums[2 * i + 1])
        {
            valido = false;
            break;
        }

        if (2 * i + 2 < nums.size())
        {
            if (nums[i] > nums[2 * i + 2])
            {
                valido = false;
                break;
            }
        }
    }

    if (valido)
        cout << "Sim" << endl;
    else
        cout << "Nao" << endl;
}

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    for (int i = 0; i < n; i++)
    {
        solve();
    }
}