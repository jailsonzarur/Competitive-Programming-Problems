#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    double a, b, c;
    while (cin >> a >> b >> c)
    {
        double p = (a + b + c) / 2;
        double area = sqrt(p * (p - a) * (p - b) * (p - c));
        double rmenor = area / p;
        double pi = 3.1415926535897;
        double roses = rmenor * rmenor * pi;
        double violets = area - roses;
        double rmaior = (a * b * c) / sqrt((a + b + c) * (b + c - a) * (c + a - b) * (a + b - c));
        double acircmaior = rmaior * rmaior * pi;
        double sunflowers = acircmaior - area;
        printf("%.4f %.4f %.4f\n", sunflowers, violets, roses);
    }
    return 0;
}