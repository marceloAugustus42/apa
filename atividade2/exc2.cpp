#include <bits/stdc++.h>
#include <chrono>
#include <stdint.h>

using namespace std;
using namespace std::chrono;

void restaura_vetor(int *v, int *c, int tam){
    for (int i = 0; i < tam; i++){
        c[i] = v[i];
    }
}

void ord_flutuacao(int *v, int tam){
    int i = 0;
    int aux;
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
}

int main(){
    srand(time(NULL));
    int tam = 1000000;
    int vetor[tam], copia[tam];

    ofstream save_data("data.txt");

    for (int i = 0; i < tam; i++){
        vetor[i] = rand()%10001;
        copia[i] = vetor[i];
    }

    for (int i = 1; i < tam; i+=50000)
    {   
        auto ini = high_resolution_clock::now();
        ord_flutuacao(vetor, i);
        auto fim = high_resolution_clock::now();
        duration<double> intervalo = fim - ini;
        if(save_data.is_open()){
        save_data << i << " " << duration_cast<nanoseconds>(intervalo).count() << endl;
        }
        restaura_vetor(vetor, copia, tam);
    }
    save_data.close();
    

    cout << "tachegandoaqui"<< endl;
    
    return 0;
}
