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
int main()
{
    int t;
    std::cin>>t;
    int diff=0;
    for(int i=0;i<t;i++){
        int x;std::cin>>x;
        if(x==1){diff++;}
    }
    if(diff>0){
        print<<"HARD"<<std::endl;
    }else{print<<"EASY"<<std::endl;}
    return 0;
}

