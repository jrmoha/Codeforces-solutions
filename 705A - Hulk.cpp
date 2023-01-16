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
    int n;
    std::cin>>n;
    std::string str="";
    for(int i=0;i<n;i++){
            print<<"I ";
        if(i%2){
            print<<"love ";
        }else{
        print<<"hate ";
        }
    if(i!=n-1){
        print<<"that ";
    }else{print<<"it ";}
    }
}

