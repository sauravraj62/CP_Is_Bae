// Given arrival and departure times of all trains that reach a railway station. Your task is to find the minimum number of platforms required for the railway station so that no train waits.
#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int i,j,k,t,l,n,m;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    int arr[2500];
	    memset(arr, 0, sizeof(arr));
	    for(i=0;i<n;i++)
	    {
	        cin>>k;
	        arr[k]++;
	    }
	    for(i=0;i<n;i++)
	    {
	        cin>>k;
	        arr[k+1]--;
	    }
	    for(i=1;i<2500;i++)
	    {
	        arr[i] += arr[i-1];
	    }
	    
	    cout<<(*max_element(arr,arr + 2500))<<endl;
	}
	return 0;
}