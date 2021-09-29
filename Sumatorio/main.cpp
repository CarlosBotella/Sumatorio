//
//  main.cpp
//  Sumatorio
//
//  Created by Carlos Botella Navarro on 23/9/21.
//

#include <iostream>
using namespace std;

void sumatorio(){
    int n;
    int total = 0;
    cout << "Elige un número";
    cin >> n;
    for (int i = 0; i <= n; i++) {
        total = total + i;
    }
    cout << "resultado" << total;
}

int main() {
    sumatorio();
}
