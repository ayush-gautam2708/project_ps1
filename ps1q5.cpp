#include <bits/stdc++.h>
using namespace std;
#define tr(container,it) for(auto it=container.begin();it!=container.end();it++)
#define all(c) c.begin(),c.end()
int main()
{
    int n;
    cin>>n;
    vector<pair<int,int> > m;
    int x,y;
    for(int i=0;i<n;i++)
    {
        cin>>x>>y;
        m.push_back({y,x});
    }
    sort(all(m));
    int temp=m[0].first;
    int cnt=1;
    for(auto it=m.begin()+1;it!=m.end();it++)
    {
        if((it->second)>=temp)
        {
            cnt+=1;
            temp=it->first;
        }
    }
    cout<<cnt;
}