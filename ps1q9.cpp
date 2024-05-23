#include <bits/stdc++.h>
using namespace std;
#define tr(container,it) for(auto it=container.begin();it!=container.end();it++)
#define all(c) c.begin(),c.end()
int main()
{
    int n,x;
    cin>>x>>n;
    set <int> s;
    multiset<int> ms;
    s.insert(0);
    s.insert(x);
    ms.insert(x);
    int t;
    while(n--)
    {
        cin>>t;
        auto it=s.lower_bound(t);
        auto it1=it;
        --it1;
        ms.erase(ms.find((*it)-(*it1)));
        ms.insert((*it)-t);
        ms.insert(t-(*it1));
        auto e=ms.end();
        e--;
        cout<<(*e)<<" ";
        s.insert(t);
    }
}