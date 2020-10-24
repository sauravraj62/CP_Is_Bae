#include<bits/stdc++.h>
using namespace std;
long long dp[1005];
long long visit[1005];
int main()
{
	long long i,j,k,t,l,n,m,x1,x2,y1,y2;
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		int arr[n+1]={0};
		for(i=1;i<=n;i++)
		cin>>arr[i];
		for(i=1;i<=n;i++)
		arr[i]+=arr[i-1];
		l=1;
		int r=1;
		int flag=0;
		while(r<=n)
		{
			int sum=arr[r]-arr[l-1];
			if(sum==m)
			{
				flag=1;
				break;
			}
			else if(sum>m)
			{
				l++;
			}
			else
			{
				r++;
			}
		}
		if(flag)
		cout<<l<<" "<<r;
		else
		cout<<-1;
		cout<<endl;
	}
	return 0;
}