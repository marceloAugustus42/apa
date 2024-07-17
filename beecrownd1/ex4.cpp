#include <bits/stdc++.h>

using namespace std;

int main(){
    int maior = 0, valor , posicao;
    for (int i = 1; i < 101; i++)
    {
        cin >> valor;
        if (valor > maior)
        {
            maior = valor;
            posicao = i;
        }
    }
    cout << maior << endl << posicao << endl;
    

    return 0;
}