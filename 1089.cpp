#include <bits/stdc++.h>

using namespace std;

int main()
{
    while (true)
    {
        int N;
        cin >> N;
        if (N == 0)
            break;
        int n = N+2;
        int array[n];
        for (int i = 0; i < N; i++)
        {
            cin >> array[i];
        }

        array[n-2] = array[0];
        array[n-1] = array[1];

        int picos = 0;

        for (int i = 2; i < n; i++)
        {
            if (array[i - 2] < array[i - 1] && array[i - 1] > array[i])
            {
                picos++;
            }
            if (array[i - 2] > array[i - 1] && array[i - 1] < array[i])
            {
                picos++;
            }
        }

        

        cout << picos << endl;
    }
    return 0;
}