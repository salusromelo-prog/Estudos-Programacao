#include <bits/stdc++.h>



using namespace std;


int main (){

    int a, b;


    cout << "Digite dois numeros: " << endl;
    cin >> a;
    cin >> b;

    while (a != b){
        if (a < b){
            cout << "Crescente!" << endl;

        }
        else {
            cout << "Decrescente!" << endl;
        }

        cout << "Digite outros dois numeros: " << endl;
        cin >> a;
        cin >> b;
    }
}
