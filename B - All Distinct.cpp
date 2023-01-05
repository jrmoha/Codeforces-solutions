
#include <string.h>
#include <iostream>
#include <map>
#include <utility>
 
int main()
{
    int t;
    std::cin>>t;
    int n;
    for(int i=0; i<t; i++)
    {
        std::cin>>n;
        std::map<int,int> hmap;
        int a[n];
        for(int j=0; j<n; j++)
        {
            std::cin>>a[j];
            hmap[a[j]]++;
        }
        int tmp=hmap.size();
        if((n-tmp)%2!=0)
        {
            tmp--;
        }
        std::cout<<tmp<<std::endl;
    }
    return 0;
}