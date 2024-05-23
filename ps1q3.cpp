#include <bits/stdc++.h>
using namespace std;
#define tr(container,it) for(typeof(container.begin()) it=container.begin();it!=container.end();it++)
#define all(c) c.begin(),c.end()
int main()
{
    int n,c;
    cin>>n;
    cin>>c;
    vector <int> tic(n);
    int mp[c];
    for(int i=0;i<n;i++)
    {
        cin>>(tic[i]);

    }
    for(int i=0;i<c;i++)
    {
        cin>>mp[i];
    }
    multiset <int , greater<int>> s;
    for(int i=0;i<n;i++)
    {
        s.insert(tic[i]);
    }
    // tr(s,it)
    // {
    //     cout<<(*it);
    // }
    for(int i=0;i<c;i++)
    {
        auto it=s.lower_bound(mp[i]);
        if(it==s.end())
        {
            cout<<-1<<endl;
        }
        else{
            cout<<(*it)<<endl;
            s.erase(it);
        }
    }
}