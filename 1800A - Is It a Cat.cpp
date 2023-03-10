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
#define YES std::cout<<"YES"<<std::endl
#define NO  std::cout<<"NO"<<std::endl
#define forr(i,n) for(int i=0;i<n;i++)
#include <iterator>
#define init std::ios::sync_with_stdio(0),std::cin.tie(0),std::cout.tie(0)
#define MAX 1000001
#include <bitset>
#include <cstring>
void solve()
{
    int n;
    std::string str;
    std::cin>>n>>str;
    transform(str.begin(),str.end(),str.begin(),::tolower);
    str.erase(unique(str.begin(), str.end()), str.end());
    str=="meow"?YES:NO;
}
int main()
{
    init;
    int t;
    std::cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}

