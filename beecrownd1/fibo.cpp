#include <bits/stdc++.h>

using namespace std;

int main(){
    int prim= 0, seg= 1, entrada, res;
    cin >> entrada;
       if(entrada == 1){
        cout << "0" << endl;
       }
       if(entrada == 2){
        cout << "0 1" << endl;
       }
       cout << "0";
       for (int i = 0; i < entrada-1; i++)
       {
        res = prim + seg;
        cout << " " << res;
        seg = prim;
        prim = res;
       }
       cout << endl;
       
    return 0;
    
}
