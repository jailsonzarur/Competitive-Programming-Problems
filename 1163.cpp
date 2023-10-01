#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    double h;
    int p1, p2, n2;
    while (cin >> h)
    {
        cin >> p1 >> p2;
        cin >> n2;
        for (int i = 0; i < n2; i++)
        {
            double a, V;
            cin >> a;
            cin >> V;
            double pi = 3.14159;
            a = a * pi / 180;
            double gravidade = 9.80665;
            double Vx = cos(a) * V;
            double Vy = sin(a) * V;
            double S, tempo1;
            tempo1 = Vy / gravidade;
            S = (gravidade * tempo1 * tempo1) / 2.0;
            double H = S + h;
            double tempo2 = sqrt((2.0 * H) / gravidade);
            double tempo = tempo1 + tempo2;
            double distancia = Vx * tempo;
            if (distancia >= p1 && distancia <= p2)
                printf("%.5f -> DUCK\n", distancia);
            else
                printf("%.5f -> NUCK\n", distancia);
        }
    }
    return 0;
}