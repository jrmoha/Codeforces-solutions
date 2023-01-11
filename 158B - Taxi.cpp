#include <string.h>
#include <iostream>
#include <map>
#include <utility>
#include <math.h>
#pragma GCC optmize(2)
#include <bits/stdc++.h>

int main()
{
    int n;
    std::cin>>n;
    int a[n];
    int minimum=0,tmp1=0,tmp2=0,tmp3=0;
    for(int i=0; i<n; i++)
    {
        std::cin>>a[i];
        switch(a[i])
        {
        case 4:
            minimum++;
            break;
        case 3:
            tmp3+=3;
            break;
        case 2:
            tmp2+=2;
            break;
        case 1:
            tmp1+=1;
            break;
        }
        if(tmp2==4)
        {
            minimum++;
            tmp2=0;
        }
        if(tmp1>0&&tmp3>0)
        {
            int mini=std::min(tmp1,(tmp3/3));
            minimum+=mini;
            tmp1-=(mini);
            tmp3-=(mini*3);
        }
    }
    if(tmp2!=0&&tmp1>=2)
    {
        minimum++;
        tmp2=0;
        tmp1-=2;
    }
    if(tmp2!=0 && tmp1==0)
    {
        minimum++;
    }
    if(tmp1!=0&&tmp3==0)
    {
        if(tmp1-2>=0&&tmp2==2)
        {
            minimum++;
            tmp1-=2;
            tmp2=0;
        }
        if(tmp1%4==0)
        {
            minimum+=(tmp1/4);
        }
        else
        {
            minimum+=((tmp1/4)+1);
        }
        tmp1/=4;
    }
    if(tmp1==0&&tmp3!=0)
    {
        minimum+=(tmp3/3);
        tmp3/=3;
    }
    if(tmp1!=0&&tmp3!=0)
    {
        while(tmp1>0&&tmp3>0)
        {
            minimum++;
            tmp1-=1;
            tmp3-=3;
        }
        while(tmp1>0)
        {
            minimum+=((tmp1/4)+1);
            tmp1=0;
        }
        while(tmp3>0)
        {
            minimum+=(tmp3/3);
            tmp3=0;
        }
    }


    std::cout<<minimum<<std::endl;
    return 0;
}

