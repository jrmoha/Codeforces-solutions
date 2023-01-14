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
    while(t--)
    {
        int n;
        std::cin>>n;
        int a[n];
        long long score=0;
        for(int i=0; i<n; i++)
        {
            std::cin>>a[i];

        }
        std::sort(a,a+n);
        bool alice=true;
        for(int i=n-1; i>=0; i--)
        {
            if(alice)
            {
                if(a[i]%2==0)
                {
                    score+=a[i];
                }
                alice=false;
            }
            else
            {
                if(a[i]%2!=0)
                {
                    score-=a[i];
                }
                alice=true;
            }
        }
        if(score==0)
        {
            std::cout<<"Tie"<<std::endl;
        }
        else if(score>0)
        {
            std::cout<<"Alice"<<std::endl;
        }
        else if(score<0)
        {
            std::cout<<"Bob"<<std::endl;
        }
    }
    return 0;
}

