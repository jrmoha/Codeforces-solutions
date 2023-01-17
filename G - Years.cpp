#include <string.h>
#include <iostream>
#include <map>
#include <utility>
#include <math.h>
#include <vector>
#include <set>
#pragma GCC optmize(2)
#include <algorithm>
#define print std::cout
#include <iterator>
#define MAX 1000001

int main()
{
    int n;
    std::cin>>n;std::map<int,int> hmap;
        int maxi=0;int year=0;
    for(int i=0;i<n;i++)
    {
        int a;int b;
        std::cin>>a>>b;
        hmap[a]++;
        hmap[b]--;
    }int countt=0;
    for(auto it:hmap){
        countt+=it.second;
        if(countt>maxi){
            maxi=countt;year=it.first;
        }
    }
    print<<year<<" "<<maxi<<std::endl;
    return 0;
}

