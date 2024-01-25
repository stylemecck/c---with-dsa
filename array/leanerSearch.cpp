//leaner search 
#include<iostream>
using namespace std;
int linearSearch(int arr[], int n, int target)
{
    for(int i=0; i<n; i++)
    {
        if(arr[i]==target)
        {
            return i; //return the index if the target is found
        }
    }
    return -1; // return if target is not found.
}

int main(){
    int arr[]={10,30,71,78,54,23,14,21,12};
    int n=sizeof(arr)  / sizeof(arr[0]);
    int target = 12;
    int result = linearSearch(arr, n, target);

    if (result != -1) {
            cout<<"Element is found at index "<<result;
    }
    else{
        cout<<"Element is not found";
    }
    return 0;
}