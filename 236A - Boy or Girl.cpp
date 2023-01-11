#include <string.h>
#include <iostream>
#include <map>
#include <utility>
#include <math.h>
#pragma GCC optmize(2)
#include <bits/stdc++.h>

int main()
{
    std::string str;
    std::cin>>str;
    std::set<char> sett;
    for(char c:str)
    {
        sett.insert(c);
    }
    if(sett.size()%2!=0)
    {
        std::cout<<"IGNORE HIM!"<<std::endl;
    }
    else
    {
        std::cout<<"CHAT WITH HER!"<<std::endl;
    }

    return 0;
}

