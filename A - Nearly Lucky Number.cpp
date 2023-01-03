#include <string>
#include <iostream>
#include<math.h>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    long long num;
    cin>>num;
    int count=0;
    while(num!=0)
    {
        if(num%10==4||num%10==7)
        {
            count++;
        }
        num=num/10;
    }
    if(count==4||count==7)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}