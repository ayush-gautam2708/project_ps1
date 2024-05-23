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
    sort(arr,arr+n);
    int mid= n/2;
    int m=arr[mid];
    long long int sum=0;
    for(int i=0;i<n;i++)
    {
        if(i<mid)
        {
            sum+=m-arr[i];
        }
        else
        {
            sum+=arr[i]-m;
        }
    }
    cout<<sum;
}