#include <iostream>
#include <cmath>
using namespace std;

int contarDivisores(int num) {
    int contador = 0;
    int raiz = sqrt(num);
    for (int i = 1; i <= raiz; ++i) {
        if (num % i == 0) {
            if (i == num / i) {
                contador += 1; 
            } else {
                contador += 2; 
            }
        }
    }
    return contador;
}

int encontrarNumeroTriangular(int limiteDivisores) {
    int numero = 1;
    int indice = 2;

    while (contarDivisores(numero) <= limiteDivisores) {
        numero += indice;
        indice++;
    }

    return numero;
}

int main() {
    int limiteDivisores = 500;
    int resultado = encontrarNumeroTriangular(limiteDivisores);

    cout<<resultado<<endl;

    return 0;
}
