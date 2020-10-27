// Given a sorted array of positive integers. Your task is to rearrange  the array elements alternatively i.e first element should be max value, second should be min value, third should be second max, fourth should be second min and so on...
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
         ll arr[n];
         for(i=0;i<n;i++)
         {
          cin>>arr[i];
         }
         i = 0;
         j = n-1;
         while(i<j)
         {
            swap(arr[i], arr[j]);
            i+=2;
            j--;
         }

         for(i=0;i<n;i++)
         {
          cout<<arr[i]<<" ";
         }

         cout<<endl;
      }

      return 0;
}