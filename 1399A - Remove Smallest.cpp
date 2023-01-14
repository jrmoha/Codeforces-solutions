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
        std::vector<int> a(n);
        for(int i=0; i<n; i++)
            std::cin>>a[i];
        int countt=0;
        std::sort(a.begin(),a.end());
        if(n>1)
        {
            for(int i=0; i<n-1; i++)
            {
                if(std::abs(a[i]-a[i+1])<=1)
                {
                    countt++;
                }
            }
            if(n-countt==1)
            {
                std::cout<<"YES"<<std::endl;
            }
            else
            {
                std::cout<<"NO"<<std::endl;
            }
        }
        else
        {
            std::cout<<"YES"<<std::endl;
        }
    }
    return 0;
}

