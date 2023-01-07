#include <string.h>
#include <iostream>
#include <map>
#include <utility>
#include <math.h>
#pragma GCC optmize(2)
#include <bits/stdc++.h>

int main()
{
    int t;
    std::cin>>t;
    while(t>0)
    {
        int n;
        int k;
        std::cin>>n>>k;
        int x=1,y=0;
        for(int i=0; i<n; i++)
        {
            int num;
            std::cin>>num;
            if(num==x)
            {
                x++;
            }
            else
            {
                y++;
            }
        }
        std::cout<<(y+k-1)/k<<std::endl;
        t--;
    }
    return 0;
}

