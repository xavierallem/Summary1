/* Credits to Ansh Agrawal for program */
#include <bits/stdc++.h>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

#define CHOCO_BANANA	0
#define VANILLA			1
#define DARK_CHOCO		2
#define TROPICAL 		3

using namespace std;

/* Data structure representing a cookie */
struct cookie {
        
        /* Customer ID's*/
        int16_t customerId;

        /* Cookie Type */
        int8_t cookieType;
};

/* Data Structure representing a Tray */
struct tray {
        /* Each tray can contain only 6 cookies */
        struct cookie cookies[6];
};
/* Total 64 trays */
struct tray trays[64];
int main()
{
    string s,a,b,c;cin>>s;
    int a1,b1,c1;
    vector<pair<int,pair<int,int>>> v;
    while(true){
        cin>>a;
        if(a=="EOF")
            break;
        cin>>b;
        cin>>c;
        a1 = stoi(a);
        b1 = stoi(b);
        c1 = stoi(c);
        v.push_back({a1,{b1,c1}});
        }
    int i,len = v.size(),ans=0;
    int d,t;cin>>d>>t;
    for( i=0;i<len;i++){
        if(v[i].second.first==d&&v[i].second.second == t)
        {ans = v[i].first;break;}
    }
    if(i<len)
    cout<<ans;
    else 
    cout<<"EINVAL";
}


