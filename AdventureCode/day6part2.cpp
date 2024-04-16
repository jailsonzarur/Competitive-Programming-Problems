#include <bits/stdc++.h>

using namespace std;



long long convert(string temp)
{
    string num = "";
    for (char digito : temp)
    {
        if (digito >= '0' && digito <= '9')
            num += digito;
    }
    return stoll(num);
}

long long maneiras(long long time, long long distance) {
    long long distanceresult;
    long long maneiras = 0;
    for( long long i = 1 ; i < time ; i++ ) {
        distanceresult = (time-i) * i;
        if(distanceresult > distance) maneiras++;
    }
    return maneiras;
}

int main()
{
    string times, distances;
    getline(cin, times);
    getline(cin, distances);
    long long time = convert(times);
    long long distance = convert(distances);
    int result = maneiras(time, distance);
    cout << result << endl;
    return 0;
}