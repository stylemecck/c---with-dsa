// Create a program that counts duplicate array entries in c++ using function
#include<iostream>
#include<vector>

using namespace std;
int countDuplicates(vector<int> arr){
    int count=0;
    for(int i=0; i< arr.size(); i++){
        for(int j=i+1; j < arr.size(); j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }
    }
    return count;
}

int main(){
    vector<int> arr={1,2,3,3,4,7,3,5};
    int count = countDuplicates(arr);
    cout<<"The number of dublicate enters is: "<<count<<endl;
    return 0;
}