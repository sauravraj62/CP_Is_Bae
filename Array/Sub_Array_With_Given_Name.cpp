// Given an unsorted array A of size N of non-negative integers, find a continuous sub-array which adds to a given number S.
#include<bits/stdc++.h>
#define ll long long
#define ff first
#define ss second
#define pb(a) push_back(a)
#define mp(a,p) make_pair(a,b)
#define chk cout<<"I'm coming here..."<<endl;
using namespace std;

int main()
{
	// freopen("../input.txt","r",stdin);
	// freopen("../output.txt","w",stdout);
    ll i,j,k,size,testCases,sum;

    cin>>testCases;

    while(testCases--)
   	{
   		cin>>size>>sum;

   		ll arr[size];
   		for(i=0;i<size;i++)
   		{
   			cin>>arr[i];
   		}

   		ll currSum = 0;
   		ll startIndex = -1;
   		ll endIndex = -1;

   		i = 0;
   		j = 0;
   		while(j<=size)
   		{
   			if(j<size)
   			{
   				currSum += arr[j++];
   			}
   			while(currSum > sum)
   			{
   				currSum -= arr[i];
				   i++;
   			}
   			if(currSum == sum)
   			{
   				startIndex = i + 1;
   				endIndex = j;
   				break;
   			}
   			if(j == size)
   			break;
   		}
   		if(startIndex != -1)
   			cout<<startIndex<<" "<<endIndex<<endl;
   		else
   			cout<<-1<<endl;
   		// for(i = startIndex - 1; i <= endIndex - 1; i++)
   		// 	cout<<arr[i]<<" ";
   		// cout<<endl;
   		// cout<<arr[startIndex] + arr[endIndex]<<endl;
   	}
}