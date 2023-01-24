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
{int t;std::cin>>t;
while(t--){
    int n;std::cin>>n;
    std::vector<int> a;std::map<int,long> hmap;int x;
    forr(i,n)
    {
        std::cin>>x;
        a.push_back(x);
        hmap[x]++;
    }
    int cnt=0;
    forr(i,n){
    if(hmap[a[i]]>1){

        cnt=i+1;hmap[a[i]]--;
    }
    }
    printf("%d\n",cnt);}
    return 0;
}

