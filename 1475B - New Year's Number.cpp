#include <string.h>
#include <iostream>
#include <map>
#include <utility>
#include <math.h>
#include <vector>
#pragma GCC optmize(2)
#include <algorithm>
int main()
{
    int t;
    std::cin>>t;
    while(t--)
    {
        int n;
        std::cin>>n;
        if(n<2020)
        {
            std::cout<<"NO"<<std::endl;
            continue;
        }
        if(n%2020==0||n%2021==0)
        {
            std::cout<<"YES"<<std::endl;
            continue;
        }
        int m=n%2020;
        int div=n/2020;
        if(m<=div)
        {
            std::cout<<"YES"<<std::endl;
        }
        else
        {
            std::cout<<"NO"<<std::endl;
        }

    }
    return 0;
}

