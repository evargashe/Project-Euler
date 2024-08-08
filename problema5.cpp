#include <iostream>
#include <numeric> // Para std::lcm en C++17 y superior

// Función para calcular el mínimo común múltiplo de dos números
int lcm(int a, int b) {
    return std::lcm(a, b);
}

int main() {
    // Inicializamos el resultado con 1
    int result = 1;

    // Calculamos el mínimo común múltiplo de todos los números del 1 al 20
    for (int i = 2; i <= 20; ++i) {
        result = lcm(result, i);
    }

    // Imprimimos el resultado
    std::cout << "El menor número positivo divisible por todos los números del 1 al 20 es: " << result << std::endl;

    return 0;
}
