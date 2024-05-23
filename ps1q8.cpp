#include <bits/stdc++.h>
using namespace std;
#define tr(container,it) for(auto it=container.begin();it!=container.end();it++)
#define all(c) c.begin(),c.end()
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int cnt=0;
    int i=1;
    while(i<=n)
    {
        for(int j=0;j<n;j++)
        {
            if(i==arr[j])
            {
                i++;
            }
        } 
        cnt++;  
    }
    cout<<cnt;
}