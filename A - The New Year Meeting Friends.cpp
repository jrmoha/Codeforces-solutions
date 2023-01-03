#include <iostream>
#include<math.h>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int a[3];
    for(int i=0; i<3; i++)
        cin>>a[i];
    int n = sizeof(a) / sizeof(a[0]);
    sort(a,a+n);
    cout<<a[2]-a[1]+a[1]-a[0]<<endl;
 
    return 0;
}