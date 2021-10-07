//
//  main.cpp
//  Sumatorio
//
//  Created by Carlos Botella Navarro on 23/9/21.
//

/*
 ------------------------------------------------
 Datos de entrada: n : N
 Datos de salida: N
 Devolver (n·(n+1))/2
 ------------------------------------------------
 */
#include <iostream>
using namespace std;

unsigned sumatorio(unsigned n){
    unsigned int total = 0;
    for (int numeroAsumar = 0; numeroAsumar <= n; numeroAsumar++) {
        total = total + numeroAsumar;
    }
    cout << "resultado" << total;
    return total;
}

int main() {
    int numero;
    cout << "Elige un número";
    cin >> numero;
    sumatorio(numero);
}
