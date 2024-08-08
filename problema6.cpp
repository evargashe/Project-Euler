#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    long long sumaCuadrado = 0;
    long long cuadradoSuma = 0;
    for(int i=1; i<=100; i++)
    {
        sumaCuadrado += i * i;
        cuadradoSuma += i;

    }

    long long cuadradoSumaTotal = cuadradoSuma * cuadradoSuma;

    cout<< cuadradoSumaTotal - sumaCuadrado ;
}