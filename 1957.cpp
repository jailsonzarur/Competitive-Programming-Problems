#include <bits/stdc++.h>

using namespace std;

int main()
{
    int num;
    cin >> num;
    if (num >= 16)
    {
        int temp;
        string result = " ";
        while (temp >= 16)
        {
            temp = num / 16;
            int h = num % 16;
            string t;
            if (h > 9)
            {
                if (h == 10)
                    t = "A";
                if (h == 11)
                    t = "B";
                if (h == 12)
                    t = "C";
                if (h == 13)
                    t = "D";
                if (h == 14)
                    t = "E";
                if (h == 15)
                    t = "F";
                result += t;
            }else{
                result += to_string(h);
            }
        }
        cout << result << endl;
        return 0;
    }
    if(num < 10){
        cout << num << endl;
    }else{
        if (num == 10)
            cout << "A" << endl;
        if (num == 11)
            cout << "B" << endl;        
        if (num == 12)
            cout << "C" << endl;       
        if (num == 13)
            cout << "D" << endl;        
        if (num == 14)
            cout << "E" << endl;         
        if (num == 15)
            cout << "F" << endl;        
    }
    return 0;
}