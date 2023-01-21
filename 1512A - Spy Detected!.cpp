#include <string.h>
#include <iostream>
#include <map>
#include <utility>
#include <math.h>
#include <vector>
#include <bits/stdc++.h>
#include <set>
#pragma GCC optmize(2)
#include <algorithm>
#define print std::cout
#define YES std::cout<<"YES"<<std::endl;
#define NO  std::cout<<"NO"<<std::endl;
#define forr(i,n) for(int i=0;i<n;i++)
#include <iterator>
#define MAX 1000001

int main()
{int t;std::cin>>t;while(t--){
    int n;
    std::cin>>n;
    int a[n];
    std::map<int,long long int>hmap;
    std::map<int,long long int>hmap2;
    forr(i,n)
    {
        std::cin>>a[i];
        hmap[a[i]]++;
        hmap2[a[i]]=i+1;
    }
    int index=0;
  for(auto itr:hmap){
    if(itr.second==1){
        index=hmap2[itr.first];break;
    }
  }
  print<<index<<std::endl;}
    return 0;
}

