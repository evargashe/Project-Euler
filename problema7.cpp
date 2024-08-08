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
    vector<int> arr;
    int i=2;
    while (arr.size()!=10001)
    {   
        if(isPrime(i)==true)
            arr.push_back(i);
        i++;
    }
    cout<<arr.back();
    return 0;
}