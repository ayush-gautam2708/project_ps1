#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m,k;
    cin>>n;
    cin>>m;
    cin>>k;
    long long apl[n];
    long long apr[m];
    for(long long i=0;i<n;i++)
    {
        cin>>apl[i];
    }
    for(long long i=0;i<m;i++)
    {
        cin>>apr[i];
    }
    sort(apl,apl+n-1);
    sort(apr,apr+m-1);
    
    long long ptrA = 0, ptrB = 0, ans = 0;
    while (ptrA < n && ptrB < m) {
        if (abs(apl[ptrA] - apr[ptrB]) <= k) {
            ans += 1;
            ptrA += 1;
            ptrB += 1;
        }
        else if (apl[ptrA] < apr[ptrB]) {
            ptrA += 1;
        }
        else {
            ptrB += 1;
        }
    }
    cout<<ans;
}