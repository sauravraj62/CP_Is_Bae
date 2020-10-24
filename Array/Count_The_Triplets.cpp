// You don't need to read input or print anything. Your task is to complete the function countTriplet() which takes the array arr[] and N as inputs and returns the triplet count


class Solution{
public:  
   int find(int arr[], int l,int r,int x)
   {
       while(l <= r)
       {
           int mid = (l + r)/2;
           if(arr[mid] == x)
               return 1;
           else if(arr[mid] < x)
               l = mid + 1;
           else
               r = mid - 1;
       }
       
       return -1;
   }
   int countTriplet(int arr[], int n)
   {
       sort(arr, arr + n);
       int i,j,k, ans = 0;
       
       for(i=0;i<n;i++)
       {
           for(j=i+1;j<n;j++)
           {
               k = find(arr, j+1,n-1,arr[i] + arr[j]);
               ans += (k != -1 && k == 1);
           }
       }
       
       return ans;
   }
};