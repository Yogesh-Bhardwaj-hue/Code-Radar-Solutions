#include <stdio.h>

int binarySearch(int arr[] , int n , int target){

    for(int i = 0 ; i<= n-1; i++) {
        int low = 0 , high = n-1;
        int mid = (low + high)/2 ;
        if(arr[mid]==target){
            return arr[mid];
        }
        else{
            low = mid - 1;
            high = mid + 1;
        }
        

    }
    return -1;

}