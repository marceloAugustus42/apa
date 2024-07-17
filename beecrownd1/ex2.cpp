#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
    int a, b, c;
    cin >> a >> b >> c;

    int MaiorAB = (a+b+abs(a-b))/2;

    if(c > MaiorAB){
        MaiorAB = c;
    }

    cout << MaiorAB << " eh o maior" << endl;
 
    return 0;
}