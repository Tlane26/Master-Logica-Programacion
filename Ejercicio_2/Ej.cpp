// Programa para determinar si es un palindromo o no
// Devuelve true o false
// 16 ago 2021

#include <iostream>
#include <string>

using namespace std;

bool palindromo(string palabra){
    int size;
    string palabra2 = "";

    size = palabra.length();

    for(int i = size-1; i >= 0; i--){
        palabra2 += palabra[i];
    }

    return palabra == palabra2;
}

int main(){
    string palabra;

    cin >> palabra;
    cout << palindromo(palabra);
}