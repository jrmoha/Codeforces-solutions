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
#define init std::ios::sync_with_stdio(0),std::cin.tie(0),std::cout.tie(0)
#define MAX 1000001
 
int main()
{
    init;
int t;
    std::cin>>t;
    while(t--){
        int n;
    std::cin>>n;
    std::vector<int> a;
    for(int i=0; i<n; i++)
    {
        int x;
        std::cin>>x;
        a.push_back(x);
    }
    sort(a.begin(),a.end());
    int result=0;
    if(a[0]!=0)
        result++;
    for(int i=0; i<n-1; i++)
    {
        if(i>=a[i]&&i+1<a[i+1])
        {
            result++;
        }
    }result++;
    print<<result<<std::endl;
    }
    return 0;
}