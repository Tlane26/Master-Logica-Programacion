// Tlanetzi Chavez
// 1 agosto 2021

// Crear una funcion que devuelva la tabla de multiplicar de un numero dado

#include <iostream>
#include <string>

using namespace std;

string tablas(int numero){
    string respuesta;

    respuesta = "# tabla del " + to_string(numero) + " # \n";
    for(int multiplicador = 1; multiplicador < 11; multiplicador++){
        respuesta += to_string(multiplicador) + " x " + to_string(numero) + " = " + to_string(multiplicador * numero) + "\n";
    }
    return respuesta;
}

int main(){

    int numero;

    cout << "Numero a multiplicar:";
    cin >> numero;

    cout << tablas(numero);


    return 0;
}