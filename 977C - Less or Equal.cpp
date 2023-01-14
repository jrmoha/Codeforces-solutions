#include <string.h>
#include <iostream>
#include <map>
#include <utility>
#include <math.h>
#include <vector>
#pragma GCC optmize(2)
#include <algorithm>
int main()
{
 
        int n,k;
        std::cin>>n>>k;
        std::vector<int> a(n);
        for(int i=0; i<n; i++)
            std::cin>>a[i];
        std::sort(a.begin(),a.end());
        int x=0;
        if(k==0){
            x=a[0]-1;
        }else{
        x=a[k-1];}int countt=0;
        for(int i=0;i<n;i++){
            if(a[i]<=x){
                countt++;
            }
        }
        if(countt!=k||x==0){
            std::cout<<-1<<std::endl;
        }else{
        std::cout<<x<<std::endl;}
 
    return 0;
}