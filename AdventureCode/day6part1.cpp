#include <bits/stdc++.h>

using namespace std;

long long maneiras(int time, int distance) {
    int distanceresult;
    long long maneiras = 0;
    for( int i = 1 ; i < time ; i++ ) {
        distanceresult = (time-i) * i;
        if(distanceresult > distance) maneiras++;
    }
    return maneiras;
}

int main() {
    int time[4];
    int distance[4];
    long long result = 1;
    for( int i = 0 ; i < 4 ; i++ ) {
        cin >> time[i];
    }
    for( int i = 0 ; i < 4 ; i++ ) {
        cin >> distance[i];
    }

    for( int i = 0 ; i < 4 ; i++ ) {
        result *= maneiras(time[i], distance[i]);
    }
    cout << result << endl;
    return 0;
} 