#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    cin>>n;
    cin>>x;
    int w[n];
    for(int i=0;i<n;i++)
    {
        cin>>w[i];
    }
    sort(w,w+n);
    int p=n-1;
    int chcnt=0;
    int cnt=0;
    int j,i;
    for(i=0;i<n;i++)
    {
        for(j=p;j>i;j--)
        {
            if(w[i]+w[j]<=x)
            {
                p=j-1;
                chcnt+=2;
                cnt+=1;
                break;
            }
        }
        if(j<=i)
        {
            cnt+=n-chcnt;
            break;
        }
    }
    cout<<cnt;

}