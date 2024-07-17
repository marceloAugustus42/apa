#include <bits/stdc++.h>

using namespace std;

int main()
{

    int X, Y, SomaImp = 0;
    cin >> X >> Y;

    if (X > Y)
    {
        for (int i = Y+1; i < X; i++)
        {
            if (i % 2 != 0)
            {
                SomaImp += i;
            }
        }
    }
    else
    {
        for (int i = X+1; i < Y; i++)
        {
            if (i % 2 != 0)
            {
                SomaImp += i;
            }
        }
    }

    cout << SomaImp << endl;

    return 0;
}