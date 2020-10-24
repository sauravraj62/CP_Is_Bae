// Given an array C of size N-1 and given that there are numbers from 1 to N with one element missing, the missing number is to be found.
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
   freopen("../input.txt","r",stdin);
   freopen("../output.txt","w",stdout);
    ll i,j,k,n,testCases,sum;

    cin>>testCases;

    while(testCases--)
      {
         cin>>n;
         sum = 0;
         for(i=0;i<n-1;i++)
         {
            cin>>k;
           	sum += k;
         }
         

         cout<<((n*(n+1))/2 - sum)<<endl;
      }

      return 0;
}