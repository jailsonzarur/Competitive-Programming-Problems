#include <bits/stdc++.h>

using namespace std;

int main()
{
    double xA, yA, xB, yB;
    cin >> xA >> yA >> xB >> yB;
    double dist = sqrt((xB-xA)*(xB-xA) + (yB - yA)*(yB - yA));
    printf("%.3lf\n", dist);
    return 0;
}