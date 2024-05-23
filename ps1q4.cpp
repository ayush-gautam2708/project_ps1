#include <bits/stdc++.h>
using namespace std;
#define tr(container,it) for(auto it=container.begin();it!=container.end();it++)
#define all(c) c.begin(),c.end()
int main()
{
    int n,x,y;
    cin>>n;
    vector<pair<int,int> > vp(n);
    for(int i=0;i<n;i++)
    {
        cin>>x>>y;
        vp.push_back({x,1});
        vp.push_back({y,-1});
    }
    sort(all(vp));
    int sum=0,ans=0;
    for(auto it=vp.begin();it!=vp.end();it++)
    {
        sum+=it->second;
        ans=max(ans,sum);
    }
    cout<<ans;
}