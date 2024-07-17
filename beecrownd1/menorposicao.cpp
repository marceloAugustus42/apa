#include <bits/stdc++.h>

using namespace std;

int main(){
    int tam, menor, pos;
    cin >> tam;
    int vet[tam];
    for (int i = 0; i < tam; i++){
        cin >> vet[i];
    }
    menor = vet[0];
    for (int i = 0; i < tam; i++)
    {
        if (vet[i]<menor)
        {
            menor = vet[i];
            pos = i;
        }
    }
    cout << "Menor valor: " << menor << endl << "Posicao: " << pos << endl;

    return 0;
    
}