#include <iostream>
#include <cmath>
using namespace std;

bool isPalindromo(int a,int b)
{
    int producto = a*b;
    string stringProducto = to_string(producto);
    bool is=true;
    for (int i=0, j=stringProducto.size()-1 ; i < stringProducto.size()/2; i++, j--)
    {
        if(stringProducto[i]!=stringProducto[j])
        {
            is=false;
            break;
        }
    }
    return is;
}

int main() {
    int start=100;
    int end=999;
    int mayor=0;
    for(int i=start; i<=end; i++)
    {
        for(int j=i; j<=end; j++)
        {
            if(isPalindromo(i,j)==true)
            {
                if( i*j >= mayor)
                    mayor = i*j;
            }
        }
    }
    cout<<"mayor ="<<mayor;
    return 0;
}
