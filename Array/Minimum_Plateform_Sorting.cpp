//Given arrival and departure times of all trains that reach a railway station. Your task is to find the minimum number of platforms required for the railway station so that no train waits.
#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int i,j,k,t,l,n,m;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    int arr1[n];
	    int arr2[n];
	    for(i=0;i<n;i++)
	    {
	        cin>>arr1[i];
	    }
	    for(i=0;i<n;i++)
	    {
	        cin>>arr2[i];
	    }
	    sort(arr1, arr1 + n);
	    sort(arr2, arr2 + n);
	    i = 0;
	    j = 0;
	    int curr = 0, ans = 0;
	    while(i<n && j<n)
	    {
	        if(arr1[i] <= arr2[j])
	        {
	            curr++;
	            i++;
	        }
	        else
	        {
	            curr--;
	            j++;
	        }
	        ans = max(ans, curr);
	    }
	    
	    cout<<ans<<endl;
	}
	return 0;
}