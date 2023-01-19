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
#define YES std::cout<<"YES"<<std::endl;
#define NO  std::cout<<"NO"<<std::endl;
#include <iterator>
#define MAX 1000001

int main()
{
    int t;
    std::cin>>t;
    while(t--)
    {
        int n;
        int m;
        std::cin>>n>>m;
        int a[n+m];
        for(int i=0; i<n+m; i++)std::cin>>a[i];
        std::sort(a,a+n+m-1);
        std::reverse(a,a+n+m);
        long long int sum=0;
        for(int k=0; k<n; k++)
            sum+=a[k];
        print<<sum<<std::endl;
    }
    return 0;
}

