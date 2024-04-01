#include <bits/stdc++.h>

using namespace std;

int main(){
    int ql = 0 , vg = 0 , cs= 0 , cr= 0;
    string arq;
    cin >> arq;
    ifstream fin(arq);

    if (fin.is_open()){
        string linha;
        char c;
        while (getline(fin, linha)){
            int x = 0;
            ql++;
            while (x < linha.size())
            {
                if (linha[x] == 'a' || linha[x] == 'e' ||linha[x] == 'i' || linha[x] == 'o' || linha[x] == 'u')
            {
                vg++;
            }
            else{
                cs++;
            }
            cr++;
            x++;
            } 
        }
        fin.close();
    }
    cout << "Quebra de Linhas: " << ql << endl << "Caracteres: " << cr << endl << "Vogais: " << vg << endl << "Consoantes: " << cs << endl;

    return 0;
}