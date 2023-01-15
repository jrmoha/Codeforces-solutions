#include <string.h>
#include <iostream>
#include <map>
#include <utility>
#include <math.h>
#include <vector>
#include <set>
#pragma GCC optmize(2)
#include <algorithm>
int b[100001];
int c[100001];
int main()
{
    int n,m;
    std::cin>>n>>m;
    int a[n];
    int tmp=0;
    for(int i=0; i<n; i++)
        std::cin>>a[i];
    for(int i=n-1; i>=0; i--)
    {
        if(b[a[i]]==0)
        {
            tmp++;
            b[a[i]]=1;
        }
        c[i]=tmp;
    }
    int l;
    while(m--)
    {
        std::cin>>l;
        std::cout<<c[l-1]<<std::endl;
    }
    return 0;
}