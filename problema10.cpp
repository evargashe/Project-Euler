#include <iostream>
#include <vector>
using namespace std;

bool isPrime(int number)
{
    int count=0;
    bool is=true;
    for(int i=1; i<=number; i++)
    {
        if(number % i == 0)
        {
            count++;
        }
        if(count>=3)
        {
            is=false;
            break;
        }
    }
    return is;

}
int main()
{
    long long int sum=0;

    for(long long int i=2; i<2000000; i++)
    {
        if(isPrime(i))
            sum+=i;
    }
    cout<<sum;
    return 0;
}