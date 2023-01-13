#include <string.h>
#include <iostream>
#include <map>
#include <utility>
#include <math.h>
#pragma GCC optmize(2)
#include <bits/stdc++.h>
 
int main()
{
    int n,m;
    std::cin>>n>>m;
    std::map<std::string,std::string> hmap;
    std::string words[n];
    for(int i=0; i<m; i++)
    {
        std::string s1,s2;
        std::cin>>s1>>s2;
        hmap[s1]=s2;
    }
    for(int i=0; i<n; i++)
    {
        std::cin>>words[i];
        if(hmap[words[i]].length()<words[i].length())
        {
            words[i]=hmap[words[i]];
        }
        std::cout<<words[i]<<" ";
    }
    return 0;
}