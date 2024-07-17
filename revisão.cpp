#include <bits/stdc++.h>

using namespace std;

int main(){
    srand(time(NULL));
    int tentativa, num;
    bool ganhou = false;
    cout << "Chute um numero de 0 a 100:" << endl;
    
    ofstream jogo("jogo.txt");
    ifstream lerjogo("jogo.txt");
    if (jogo.is_open()){
        for (int i = 0; i < 100; i++){
            jogo << rand()%101 << " ";
        }
    }
    jogo.close();
    if (lerjogo.is_open())
    {
        for (int i = 0; i < 5; i++)
        {
            cin >> tentativa;
            while (lerjogo >> num){
                if (num == tentativa){
                    ganhou = true;
                }
            }
            ganhou ? cout << "O numero " << tentativa << " esta no arquivo" << endl : cout << "O numero " << tentativa << " nao esta no arquivo" << endl;
            ganhou = false;
            lerjogo.close();
            lerjogo.open("jogo.txt");
        }
    }
    lerjogo.close();
    return 0;
}