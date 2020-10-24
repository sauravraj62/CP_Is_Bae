// Given an array arr of N integers. Find the contiguous sub-array with maximum sum.
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
    ll i,j,k,n,testCases,sum;

    cin>>testCases;

    while(testCases--)
      {
         cin>>n;
         ll arr[n];
         for(i=0;i<n;i++)
         {
            cin>>arr[i];
         }
         ll maxi = INT_MIN;
         ll curr = 0;
         for(i=0;i<n;i++)
         {
            curr += arr[i];
            maxi = max(maxi, curr);
            if(curr<0)
               curr = 0;
         }

         cout<<maxi<<endl;
      }

      return 0;
}