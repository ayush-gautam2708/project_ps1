#include <bits/stdc++.h>
using namespace std;
#define tr(container,it) for(auto it=container.begin();it!=container.end();it++)
#define all(c) c.begin(),c.end()
int main()
{
    long long n;
    cin>>n;
    vector<vector<long long> > vv(n,vector<long long>(3));
    for(long long i=0;i<n;i++)
    {
        cin>>vv[i][0]>>vv[i][1];
        vv[i][2]=i;
    }
    sort(vv.begin(),vv.end());
    priority_queue<pair<long long,long long>,vector<pair<long long,long long> >,greater<pair<long long,long long> > >pq;
    long long occ[n];
    long long cnt=0;
    for(long long i=0;i<n;i++)
    {
        long long arr=vv[i][0];
        long long depar=vv[i][1];
        if(pq.empty()|| pq.top().first>=arr)
        {
            cnt++;
            occ[vv[i][2]]=cnt;
            pq.push({depar,cnt});
        }
        else{
            long long vr=pq.top().second;
            occ[vv[i][2]]=vr;
            pq.pop();
            pq.push({depar,vr});
        }
    }
    cout<<cnt<<"\n";
    for(long long i=0;i<n;i++)
    {
        cout<<occ[i]<<" ";
    }

}