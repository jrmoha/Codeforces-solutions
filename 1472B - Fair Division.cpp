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
        long long n;
        std::cin>>n;
        long long int arr[n];
        std::map<std::string,int> hmap;
        long long sum=0;
        for(long long i=0; i<n; i++)
        {
            std::cin>>arr[i];
            sum+=arr[i];
            if(arr[i]==1)
            {
                hmap["one"]++;
            }
            else
            {
                hmap["two"]++;
            }
        }
        bool retval=false;
        if(hmap["one"]==0)
        {
            if(hmap["two"]%2==0)
            {
                retval=true;
            }
        }
        if(hmap["two"]==0)
        {
            if(hmap["one"]%2==0)
            {
                retval=true;
            }
        }
        if(hmap["one"]%2==0&&hmap["two"]%2==0)
        {
            retval=true;
        }
        if((hmap["one"]+hmap["two"])%2!=0&&sum%2==0&&hmap["two"]!=0&&hmap["one"]!=0)
        {
            retval=true;
        }

        if(retval)
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

