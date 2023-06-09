// here we see the binary search in the c
// preprocessor
#include <stdio.h>
int binarySearch(int arr[], int l, int r, int key)
{


    if (r >= l) {
        int mid  = (l+r)/2;
        if (arr[mid]==key)
        {
            return mid;
        }
        if (arr[mid]>key)
        {
            return binarySearch( arr,  l,  mid-1,  key);

        }else{
            return binarySearch( arr,  mid+1, r,  key);
        }
        
    }
    return -1;
  
}

// main method start here ...

int main()
{
    // create array
    int arr[] = {2, 4, 5, 6, 77, 78};
    int n = sizeof(arr) / sizeof(int);

    int l = 0;
    int r = n - 1;
    int key = 77;
    int index = binarySearch(arr, l, r, key);
    printf("%d data is present at index of %d ", key, index);
    return 0;
}