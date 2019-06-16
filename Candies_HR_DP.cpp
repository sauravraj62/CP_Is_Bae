#include <bits/stdc++.h>
#define ll long long
#define pb(a) push_back(a)
#define mpp(a,b) make_pair(a,b)
#define ff first
#define ss second
#define MOD 1000000007
using namespace std;

int main()
{
    ll i,j,k,t,l,n,m,a,b,c,d,x,y;
    cin>>n;
    ll arr[n];
    ll dp[n];
    for(i=0;i<n;i++)
    {
        dp[i]=1;
        cin>>arr[i];
    }
    for(i=1;i<n;i++)
    {
        if(arr[i]>arr[i-1])
        dp[i]+=dp[i-1];
    }
    for(i=n-2;i>=0;i--)
    {
        if(arr[i]>arr[i+1] && dp[i]<=dp[i+1])
        dp[i]=dp[i+1]+1;
    }
    ll sum=0;
    for(i=0;i<n;i++)
    {
        sum+=dp[i];
    }
    cout<<sum;
    return 0;
}