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
    while(t--){
    int n;
    std::cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        std::cin>>arr[i];
    std::vector<int> vec,vec2;
    std::map<int,int> hmap;
    for(int i=0; i<n; i++)
        vec.push_back(arr[i]%10);
    for(int i=0; i<n; i++)
        hmap[vec[i]]++;
    for(auto it:hmap)
    {
        if(it.second>3)
        it.second=3;
        for(int i=0; i<it.second; i++)
            vec2.push_back(it.first);
    }
    bool ret=false;
    int sz=vec2.size();
    for(int i=0;i<sz;i++){
        for(int j=i+1;j<sz;j++){
            for(int k=j+1;k<sz;k++){
                if((vec2[i]+vec2[j]+vec2[k])%10==3){
                    ret=true;break;
                }
            }
            if(ret)
                break;
        }
        if(ret)
            break;
    }
    if(ret)
        std::cout<<"YES"<<std::endl;
    else
        std::cout<<"NO"<<std::endl;}
    return 0;
}

