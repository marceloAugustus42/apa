#include <bits/stdc++.h>
#define RED "\033[0;31m"
#define GREEN "\033[0;32m"
#define RESET "\033[0m"

using namespace std;

void exibir_vetor(int *v, int tam){
    for (int i = 0; i < tam; i++){
        cout << v[i] << " ";
    }
}


//ORDENAÇÃO POR INSERÇÃO
void ord_insercao(int *v, int tam){
    for (int i = 1; i < tam; i++){
        int chave = v[i];
        int j = i - 1;
        while (j>=0 && v[j]>chave){
            for (int k = 0; k < tam; k++){
                if (k == j + 1) {
                    cout << RED << v[k] << " ";
                } else if (k == j) {
                    cout << GREEN << v[k] << " ";
                } else {
                    cout << RESET << v[k] << " ";
                }
            }
            cout << RESET << endl;
            v[j+1] = v[j];
            j = j - 1;
        }
        v[j + 1] = chave;
    }
    cout << "ORDENADO POR INSERCAO: ";
    exibir_vetor(v, tam);
    
}

int main(){
    srand(time(NULL));
    int tam = 10;
    int vetor[tam];
    
    cout << "Teste o algoritmo nesse vetor:" << endl;
    for (int i = 0; i < tam; i++){
        vetor[i]= rand()%101;
    }
    exibir_vetor(vetor, tam);
    cout << endl;
    ord_insercao(vetor, tam);
    cout << endl;
}