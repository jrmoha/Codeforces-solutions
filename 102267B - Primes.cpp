#include <string.h>
#include <iostream>
#include <map>
#include <utility>
#include <math.h>
#include <vector>
#include <set>
#pragma GCC optmize(2)
#include <algorithm>
#define print std::cout
#include <iterator>
#define MAX 1000001
bool isPrime(long long int n)
{
    if(n<2)
    {
        return false;
    }
    for(int i=2; i*i<=n; i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    long long int n;
    std::cin>>n;
    if(n>2)
    {
        if(isPrime(n-2))
        {
            print<<2<<" "<<n-2<<std::endl;
        }
        else
        {
            print<<-1<<std::endl;
        }
    }
    else
    {
        print<<-1<<std::endl;
    }
    return 0;

}

