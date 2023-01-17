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
    std::string str;std::string code="";
    std::cin>>str;
    int i=0;
    while(i<str.length()){
        if(str[i]=='.'){
            code.append("0");
        }else{
           i++;
           if(str[i]=='.'){
            code.append("1");
           }else{
           code.append("2");
           }
        }i++;
    }
    print<<code<<std::endl;
    return 0;
}

