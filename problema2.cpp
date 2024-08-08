#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> paresFibo;
    
    int a=1;
    int b=2;
    paresFibo.push_back(a);
    paresFibo.push_back(b);
    int suma = a+b;
    while(suma <= 4000000)
    {
        a=b;
        b=suma;
        suma= a+b;
        paresFibo.push_back(b);
    }

    int sumPares=0;
    for(int i=0; i<paresFibo.size(); i++)
    {
        if(paresFibo[i]%2 == 0)
            sumPares += paresFibo[i];
    }

    cout<<sumPares;
    return 0;
}