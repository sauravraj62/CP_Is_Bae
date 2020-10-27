// Given two sorted arrays arr1[] of size N and arr2[] of size M. Each array is sorted in non-decreasing order. Merge the two arrays into one sorted array in non-decreasing order without using any extra space.
void merge(int arr1[], int arr2[], int n, int m) {
	    int i = n - 1, j = 0;
	    while(i>=0 && j<m)
	    {
	        if(arr1[i] > arr2[j])
            {
                int temp = arr1[i];
                arr1[i] = arr2[j];
                arr2[j] = temp;
            }
            i--;
            j++;
	    }
	    sort(arr1, arr1 + n);
	    sort(arr2, arr2 + m);
	}