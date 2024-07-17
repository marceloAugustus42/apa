#include <bits/stdc++.h>
 
using namespace std;

struct pais {
  string nome;            
  int ouro;
  int prata;
  int bronze;
};
 
int main() {
    int num, ouro, prata, bronze, maior = 0;
    cin >> num;
    vector<pais> paises;
    string nome;

    for (int i = 0; i < num; i++){
      cin >> nome >> ouro >> prata >> bronze;
      paises.push_back({nome,ouro,prata,bronze});
    }
    cout << endl << endl;
    for (const auto& pais : paises) {
        cout << pais.nome << " " << pais.ouro << " " << pais.prata << " " << pais.bronze << endl;
    }
    cout << endl << endl;
    for (int j = num; j > 0; j--)
    {
      for (int i = 0; i < paises.size(); i++){
        if (paises[maior].ouro < paises[i].ouro)
        {
          maior = i;
        }
        else if (paises[maior].ouro == paises[i].ouro && paises[maior].prata < paises[i].prata){
          maior = i;
        }
        else if (paises[maior].ouro == paises[i].ouro && paises[maior].prata == paises[i].prata && paises[maior].bronze < paises[i].bronze){
          maior = i;
        }
      cout << " " << maior << " " << paises[maior].nome << " " << paises[maior].ouro << " " << paises[maior].prata << " " << paises[maior].bronze << endl;
      paises.erase(paises.begin()+maior);
    }
    }
 
    return 0;
}

/*
 else if (paises[maior].ouro == paises[i].ouro && paises[maior].prata == paises[i].prata && paises[maior].bronze == paises[i].bronze){
          cout << paises[maior].nome << " " << paises[maior].ouro << " " << paises[maior].prata << " " << paises[maior].bronze << endl;
          paises.erase(paises.begin()+maior);
          maior = i;
          cout << paises[maior].nome << " " << paises[maior].ouro << " " << paises[maior].prata << " " << paises[maior].bronze << endl;
        }
*/