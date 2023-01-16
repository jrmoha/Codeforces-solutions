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
   std::string str;
   std::cin>>n>>str;
   int cnt=0;
   for(int i=0;i<n-1;i++){
    if(str[i]!=str[i+1]){
        cnt++;
    }
   }
   if(str[0]=='0'&&cnt!=0){
    cnt--;
   }
   print<<cnt<<std::endl;
}
int main()
{int t;std::cin>>t;
while(t--){solve();}
}

