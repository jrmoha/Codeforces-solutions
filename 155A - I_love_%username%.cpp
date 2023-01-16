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
int main()
{
    int n;
    std::cin>>n;
    int a[n];
    std::cin>>a[0];
    int maxi=a[0];
    int mini=a[0];
    int sum=0;
    for(int i=1; i<n; i++)
    {
        std::cin>>a[i];
        if(a[i]<mini||a[i]>maxi)
        {
            sum++;
        }
        maxi=std::max(a[i],maxi);
        mini=std::min(a[i],mini);

    }
    print<<sum<<std::endl;
    return 0;
}

