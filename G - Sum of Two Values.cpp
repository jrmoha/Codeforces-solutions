#include <string.h>
#include <iostream>
#include <map>
#include <utility>
 
int main()
{
    int n;
    long long  x;
    std::cin>>n>>x;
    long long a[n];
    std::map<long long,int> ind;
    bool found=false;
    for(int i=0; i<n; i++)
    {
        std::cin>>a[i];
        ind[a[i]]=i+1;
    }
    for(int i=0; i<n; i++)
    {
        auto itr=ind.find(x-a[i]);
        if(ind.count(x-a[i])>0&&itr->second!=(i+1))
        {
            std::cout<<i+1<<" "<<itr->second<<std::endl;
            found=true;
            break;
        }
    }
    if(!found)
    {
        std::cout<<-1<<std::endl;
    }
    return 0;
}