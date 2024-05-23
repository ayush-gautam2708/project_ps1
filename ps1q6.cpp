#include <bits/stdc++.h>
using namespace std;
#define tr(container,it) for(auto it=container.begin();it!=container.end();it++)
#define all(c) c.begin(),c.end()
int main()
{
    int n,sum;
    cin>>n>>sum;
    int x;
    map <int,int> m;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        m[x]=i+1;
    }
    int flag=0;
    int temp1,temp2;
    tr(m,it)
    {
        int k=sum-(it->first);
        temp1=it->first;
        temp2=it->second;
        m.erase(it);
        auto it1= m.find(k);
        if(it1!=m.end())
        {
            cout<<(it->second)<<" "<<(it1->second);
            flag=1;
            break;
        }
        m[temp1]=temp2;
    }
    if(flag==0)
    {
        cout<<"IMPOSSIBLE";
    }
}