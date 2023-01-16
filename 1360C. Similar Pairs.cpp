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
void solve(){
int n;
        std::cin>>n;
        int a[n];
        int even=0;
        int odd=0;bool val=false;
        for(int i=0; i<n; i++)
        {
            std::cin>>a[i];
            if(a[i]%2==0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
        if(even%2!=odd%2)
        {
            print<<"NO"<<std::endl;
        }
        else
        {
            if(even%2==0){
                print<<"YES"<<std::endl;
            }else{
            for(int i=0; i<n; i++)
            {
                for(int j=i+1; j<n; j++)
                {


                    if((a[i]%2!=a[j]%2)&&(std::abs(a[i]-a[j])==1))
                    {
                        print<<"YES"<<std::endl;
                        return;
                    }
                }
            }

        print<<"NO"<<std::endl; }}
}
int main()
{
    int t;
    std::cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}

