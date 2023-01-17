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

int main()
{
    int t;std::cin>>t;
    while(t--){
    int n;std::cin>>n;
    long long int a[n];
    for(int i=0;i<n;i++)
        std::cin>>a[i];
    long long int res=0;
    for(int i=1; i<n; i++)
    {
        res=std::max(res,a[i]*a[i-1]);
    }
    print<<res<<std::endl;}
    return 0;
}

