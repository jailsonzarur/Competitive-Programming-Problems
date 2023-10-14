#include <bits/stdc++.h>

using namespace std;

int main()
{
    while (true)
    {
        int n;
        cin >> n;
        if (n == 0)
            break;
        int array[n];
        for (int i = 0; i < n; i++)
        {
            cin >> array[i];
        }

        queue<char> pen;
        int temp;
        if (array[1] - array[0] < 0)
        {
            temp = '-';
            pen.push(temp);
        }
        else
        {
            temp = '+';
            pen.push(temp);
        }

        for (int i = 2; i < n; i++)
        {
            if (array[i] - array[i - 1] < 0)
            {
                if (temp != '-')
                {
                    temp = '-';
                    pen.push(temp);
                }
            }
            
            if(array[i] - array[i-1] > 0)
            {
                if (temp != '+')
                {
                    temp = '+';
                    pen.push(temp);
                }
            }
        }

        if (array[0] - array[n-1] < 0)
        {
            if (pen.front() != '-')
            {
                pen.push('-');
            }
        }
        
        if(array[0] - array[n-1] > 0)
        {
            if (pen.front() != '+')
            {
                pen.push('+');
            }
        }

        cout << pen.size() << endl;
    }

    return 0;
}