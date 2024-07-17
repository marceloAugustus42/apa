#include <bits/stdc++.h>

using namespace std;

int main(){
    int par[5], impar[5];
    int num ,ppar=0, pimpar=0;

    for (int i = 0; i < 15; i++)
    {
        cin >> num;
        if (num%2==0 && ppar<5)
        {
            par[ppar] = num;
            ppar++;
        } else if (num%2==0 && ppar==5)
        {
            for (int i = 0; i < 5; i++)
            {
                cout << "par[" << i << "] = " << par[i] << endl;
            }
            ppar = 0;
            par[ppar] = num;
            ppar++;
            
        } else if (num%2!=0 && pimpar<5)
        {
            impar[pimpar] = num;
            pimpar++;
        } else if (num%2!=0 && pimpar==5)
        {
            for (int i = 0; i < 5; i++)
            {
                cout << "impar[" << i << "] = " << impar[i] << endl;
            }
            pimpar = 0;
            impar[pimpar] = num;
            pimpar++;
        }
    }
    for (int i = 0; i < pimpar; i++)
    {
        cout << "impar[" << i << "] = " << impar[i] << endl;
    }
    for (int i = 0; i < ppar; i++)
    {
        cout << "par[" << i << "] = " << par[i] << endl;
    }

    return 0;
}