#include <bits/stdc++.h>

using namespace std;

void exibir_vetor(int *v, int tam){
    for (int i = 0; i < tam; i++){
        cout << v[i] << " ";
    }
}

void ord_insercao(int *v, int tam){
    for (int i = 1; i < tam; i++){
        int chave = v[i];
        int j = i - 1;
        while (j>=0 && v[j]>chave){
            v[j+1] = v[j];
            j = j - 1;
        }
        v[j + 1] = chave;
    }
    cout << "ORDENADO POR INSERCAO: ";
    exibir_vetor(v, tam);
    
}

void ord_selecao(int *v, int tam){
    int aux;
    for (int i = 0; i < tam; i++){
        for (int j = i+1; j < tam; j++){
            if (v[j]<v[i]){
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }
    cout << "ORDENADO POR SELECAO: ";
    exibir_vetor(v, tam);
}

void ord_flutuacao(int *v, int tam){
    int i = 0, aux;
    while (i < tam){
        bool trocou = false;
        for (int j = 0; j < tam-1; j++){
            if (v[j+1]<v[j]){
                aux = v[j+1];
                v[j+1] = v[j];
                v[j] = aux;
                trocou =true;
            }
        }
        if (trocou == false){
            break;
        }
        i++;
    }
    cout << "ORDENADO POR FLUTUACAO: ";
    exibir_vetor(v, tam);
    
}
// :)
int main(){
    srand(time(NULL));
    int tam = 100;
    int vetor[tam], copia[tam];
    
    cout << "Teste os algoritmos nesse vetor:" << endl;
    for (int i = 0; i < tam; i++){
        vetor[i]= rand()%1001;
        copia[i]= vetor[i];
    }
    exibir_vetor(vetor, tam);
    cout << endl;
    ord_insercao(vetor, tam);
    cout << endl;
}